#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6901226763928135285LL;
_Bool var_1 = (_Bool)1;
unsigned char var_7 = (unsigned char)1;
unsigned short var_9 = (unsigned short)25;
int var_12 = -379055169;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = 473932481;
unsigned int var_19 = 3477336521U;
int var_20 = 764074098;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
