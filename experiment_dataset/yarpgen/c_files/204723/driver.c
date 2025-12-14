#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3994684194U;
unsigned char var_5 = (unsigned char)254;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-11;
short var_12 = (short)-11833;
int zero = 0;
unsigned char var_13 = (unsigned char)215;
unsigned long long int var_14 = 15696304207967029082ULL;
unsigned char var_15 = (unsigned char)241;
void init() {
}

void checksum() {
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
