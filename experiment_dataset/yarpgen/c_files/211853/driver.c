#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3942499061U;
signed char var_1 = (signed char)-44;
unsigned int var_2 = 331783903U;
unsigned short var_3 = (unsigned short)59296;
unsigned char var_5 = (unsigned char)55;
unsigned long long int var_7 = 9624541245840363474ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)19197;
unsigned short var_11 = (unsigned short)41092;
unsigned short var_12 = (unsigned short)48724;
unsigned long long int var_13 = 4158971730618458119ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
