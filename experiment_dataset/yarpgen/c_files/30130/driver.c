#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6681389989040179464LL;
unsigned int var_6 = 3383160919U;
unsigned int var_8 = 350962110U;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 117797564U;
int zero = 0;
unsigned char var_12 = (unsigned char)223;
unsigned short var_13 = (unsigned short)15243;
signed char var_14 = (signed char)-57;
unsigned short var_15 = (unsigned short)47278;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
