#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
unsigned int var_1 = 3586047847U;
unsigned char var_4 = (unsigned char)247;
unsigned short var_5 = (unsigned short)48989;
signed char var_6 = (signed char)29;
signed char var_7 = (signed char)-34;
unsigned int var_8 = 3147171736U;
int var_15 = 166861074;
int zero = 0;
unsigned int var_17 = 145694357U;
int var_18 = 2091341947;
signed char var_19 = (signed char)-45;
unsigned char var_20 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
