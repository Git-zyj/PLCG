#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6118711046657267401ULL;
int var_8 = -245879151;
unsigned char var_9 = (unsigned char)132;
unsigned short var_11 = (unsigned short)54067;
int zero = 0;
unsigned long long int var_15 = 3510426952641752340ULL;
int var_16 = 738504561;
int var_17 = 1679213070;
_Bool var_18 = (_Bool)0;
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
