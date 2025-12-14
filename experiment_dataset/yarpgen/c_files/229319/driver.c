#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35159;
signed char var_7 = (signed char)45;
signed char var_11 = (signed char)-57;
unsigned long long int var_13 = 734394459471299690ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_17 = (unsigned char)176;
int zero = 0;
long long int var_19 = 2642907675498980503LL;
unsigned int var_20 = 2644403412U;
unsigned short var_21 = (unsigned short)10153;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
