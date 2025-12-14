#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)52;
_Bool var_3 = (_Bool)0;
int var_5 = 938668822;
signed char var_7 = (signed char)-3;
int zero = 0;
unsigned char var_13 = (unsigned char)204;
unsigned int var_14 = 3648958493U;
long long int var_15 = 6706601043059038783LL;
signed char var_16 = (signed char)107;
signed char var_17 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
