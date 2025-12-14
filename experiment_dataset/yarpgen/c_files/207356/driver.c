#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20862;
short var_1 = (short)32139;
signed char var_3 = (signed char)109;
unsigned int var_4 = 3042105744U;
signed char var_5 = (signed char)10;
int var_7 = 1453869850;
unsigned int var_9 = 303588591U;
int zero = 0;
int var_11 = 1241872566;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-10136;
unsigned char var_14 = (unsigned char)1;
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
