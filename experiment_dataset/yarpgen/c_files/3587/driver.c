#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6758220999798279483ULL;
unsigned long long int var_7 = 4435874575300387226ULL;
_Bool var_9 = (_Bool)1;
signed char var_15 = (signed char)40;
int zero = 0;
unsigned short var_19 = (unsigned short)46694;
short var_20 = (short)10903;
signed char var_21 = (signed char)108;
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
