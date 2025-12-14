#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5284687923106489799LL;
unsigned int var_3 = 1847804396U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 11026330158073908459ULL;
signed char var_7 = (signed char)-85;
unsigned char var_9 = (unsigned char)147;
short var_14 = (short)-6923;
int zero = 0;
unsigned short var_18 = (unsigned short)49310;
unsigned int var_19 = 508749393U;
short var_20 = (short)-1414;
short var_21 = (short)-18153;
int var_22 = -2017845768;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
