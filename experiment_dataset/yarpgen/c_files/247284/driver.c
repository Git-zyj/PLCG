#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-83;
unsigned long long int var_7 = 12279203736341338664ULL;
unsigned char var_11 = (unsigned char)40;
unsigned long long int var_13 = 13463864470912686701ULL;
signed char var_14 = (signed char)-84;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)21362;
unsigned char var_19 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
