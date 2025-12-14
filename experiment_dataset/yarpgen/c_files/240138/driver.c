#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37936;
long long int var_9 = 6505323918189226375LL;
unsigned int var_10 = 1773685290U;
long long int var_11 = -3017531543620095973LL;
unsigned char var_13 = (unsigned char)158;
int zero = 0;
unsigned char var_15 = (unsigned char)103;
int var_16 = 2083391775;
unsigned char var_17 = (unsigned char)82;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
