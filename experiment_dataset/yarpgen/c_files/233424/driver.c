#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3761889579683982023ULL;
unsigned long long int var_3 = 12610286063531594113ULL;
unsigned char var_5 = (unsigned char)165;
unsigned char var_7 = (unsigned char)156;
signed char var_9 = (signed char)55;
unsigned char var_11 = (unsigned char)108;
unsigned int var_12 = 1135459682U;
int zero = 0;
unsigned char var_14 = (unsigned char)242;
unsigned long long int var_15 = 2402311872157516890ULL;
signed char var_16 = (signed char)-114;
unsigned int var_17 = 4294060573U;
unsigned int var_18 = 3676533903U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
