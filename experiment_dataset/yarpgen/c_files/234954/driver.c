#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)70;
unsigned short var_5 = (unsigned short)29473;
unsigned short var_9 = (unsigned short)42177;
int var_12 = 73888780;
signed char var_13 = (signed char)105;
unsigned char var_16 = (unsigned char)9;
int zero = 0;
int var_18 = 673777937;
unsigned int var_19 = 2227098989U;
unsigned int var_20 = 16000207U;
signed char var_21 = (signed char)-91;
unsigned int var_22 = 1066503753U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
