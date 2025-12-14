#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)132;
short var_5 = (short)12507;
unsigned long long int var_9 = 3827174899127973711ULL;
long long int var_12 = -7295297186693157890LL;
_Bool var_15 = (_Bool)0;
unsigned char var_17 = (unsigned char)133;
int zero = 0;
short var_19 = (short)20240;
int var_20 = -674732320;
unsigned long long int var_21 = 8830292399652668164ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 10785623973669772253ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
