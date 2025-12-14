#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16483139038757245229ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)46771;
long long int var_11 = -5326858499064919052LL;
long long int var_15 = 4997435564155462641LL;
int zero = 0;
short var_16 = (short)26041;
short var_17 = (short)15201;
unsigned short var_18 = (unsigned short)57776;
unsigned char var_19 = (unsigned char)134;
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
