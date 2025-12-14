#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)127;
signed char var_5 = (signed char)-9;
unsigned char var_9 = (unsigned char)216;
unsigned char var_13 = (unsigned char)18;
int zero = 0;
short var_19 = (short)-11592;
unsigned char var_20 = (unsigned char)161;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)15;
void init() {
}

void checksum() {
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
