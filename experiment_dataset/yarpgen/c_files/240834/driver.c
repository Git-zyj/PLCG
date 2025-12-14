#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11349;
long long int var_6 = -3280607994752422700LL;
signed char var_8 = (signed char)-83;
int var_10 = 1524910507;
unsigned int var_11 = 47844166U;
int var_12 = -603574320;
unsigned int var_13 = 3963609732U;
int zero = 0;
signed char var_14 = (signed char)-84;
unsigned short var_15 = (unsigned short)49841;
int var_16 = 1854541626;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
