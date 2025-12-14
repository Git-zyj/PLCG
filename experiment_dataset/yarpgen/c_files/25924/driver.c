#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 202485378;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 3896372018496239268ULL;
int var_3 = 962767180;
unsigned long long int var_4 = 8031936612606895355ULL;
unsigned short var_6 = (unsigned short)35800;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 2823024315920963812ULL;
unsigned short var_12 = (unsigned short)49940;
unsigned char var_13 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
