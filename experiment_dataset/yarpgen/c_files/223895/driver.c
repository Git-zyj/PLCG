#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 833209289;
int var_2 = -275193480;
unsigned short var_3 = (unsigned short)48821;
signed char var_9 = (signed char)-13;
signed char var_13 = (signed char)68;
unsigned short var_15 = (unsigned short)30654;
int var_17 = -439019515;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 1583292026674864167ULL;
short var_21 = (short)22933;
void init() {
}

void checksum() {
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
