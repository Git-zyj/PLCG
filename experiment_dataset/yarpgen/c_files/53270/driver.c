#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)7092;
unsigned char var_9 = (unsigned char)18;
int var_10 = 233768088;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = -8300216550570555394LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)25703;
short var_19 = (short)-31677;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
