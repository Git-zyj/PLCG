#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -230163906;
unsigned char var_2 = (unsigned char)18;
unsigned char var_5 = (unsigned char)18;
unsigned long long int var_6 = 16754594523991224764ULL;
unsigned int var_7 = 2112695495U;
unsigned long long int var_8 = 12015658529407839500ULL;
long long int var_9 = -1137675343302193544LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_12 = 197903716;
unsigned char var_13 = (unsigned char)249;
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
