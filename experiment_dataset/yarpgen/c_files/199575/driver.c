#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11884619640709571675ULL;
unsigned long long int var_2 = 16320508748892147962ULL;
_Bool var_4 = (_Bool)0;
int var_5 = 1326694106;
long long int var_7 = 6557381350027504505LL;
unsigned char var_16 = (unsigned char)70;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -6751940951358073385LL;
void init() {
}

void checksum() {
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
