#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_9 = -7027704439396273833LL;
short var_11 = (short)26633;
int var_12 = -1700460395;
unsigned long long int var_13 = 18431370336771478302ULL;
unsigned char var_16 = (unsigned char)45;
int zero = 0;
signed char var_17 = (signed char)-124;
int var_18 = -1308799636;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-24;
int var_21 = 1889058412;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
