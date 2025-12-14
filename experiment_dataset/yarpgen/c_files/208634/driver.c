#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16768;
unsigned char var_6 = (unsigned char)4;
unsigned int var_7 = 2128932755U;
unsigned int var_9 = 2256534905U;
long long int var_12 = 1499700007167754670LL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_18 = 9549251417077772373ULL;
int zero = 0;
unsigned int var_20 = 1186435142U;
signed char var_21 = (signed char)5;
signed char var_22 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
