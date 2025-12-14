#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6908495914162388791LL;
int var_2 = 1763875018;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-62;
unsigned short var_6 = (unsigned short)40196;
unsigned int var_7 = 3556743041U;
long long int var_8 = 8435021172547883694LL;
short var_9 = (short)-20467;
int zero = 0;
unsigned short var_10 = (unsigned short)35635;
unsigned char var_11 = (unsigned char)32;
int var_12 = 276619781;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
