#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -259434633;
unsigned long long int var_6 = 7266761750810292602ULL;
unsigned char var_8 = (unsigned char)142;
_Bool var_11 = (_Bool)0;
long long int var_13 = -7113911268699045604LL;
int var_14 = 1165890988;
int zero = 0;
long long int var_19 = -9052447579824111249LL;
unsigned int var_20 = 3804515270U;
long long int var_21 = -7992401770445311521LL;
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
