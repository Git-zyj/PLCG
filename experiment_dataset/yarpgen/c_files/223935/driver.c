#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7209939388317579818ULL;
unsigned int var_3 = 1294733248U;
long long int var_4 = 1414262142368183490LL;
unsigned int var_5 = 196650208U;
signed char var_9 = (signed char)-101;
_Bool var_10 = (_Bool)0;
unsigned long long int var_14 = 6799394564365805307ULL;
unsigned long long int var_18 = 3915710514132454719ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)13;
int var_21 = 1707104867;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
