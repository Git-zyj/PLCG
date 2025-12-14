#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1848019499;
unsigned char var_9 = (unsigned char)124;
long long int var_11 = -2090769523941387020LL;
unsigned int var_12 = 3850463254U;
unsigned char var_14 = (unsigned char)202;
unsigned char var_19 = (unsigned char)162;
int zero = 0;
unsigned int var_20 = 2759338467U;
unsigned long long int var_21 = 1215182011567874045ULL;
_Bool var_22 = (_Bool)1;
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
