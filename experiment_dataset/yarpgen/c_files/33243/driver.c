#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10340991422001602042ULL;
unsigned char var_2 = (unsigned char)33;
unsigned short var_3 = (unsigned short)65415;
long long int var_4 = 3633447850206427766LL;
signed char var_6 = (signed char)70;
signed char var_7 = (signed char)89;
int zero = 0;
unsigned char var_11 = (unsigned char)237;
unsigned int var_12 = 3605853279U;
unsigned long long int var_13 = 587975722305325453ULL;
unsigned char var_14 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
