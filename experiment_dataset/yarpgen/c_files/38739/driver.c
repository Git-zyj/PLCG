#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4692;
unsigned short var_2 = (unsigned short)37138;
long long int var_3 = -5348412116450685400LL;
long long int var_4 = -9219662487017113158LL;
signed char var_5 = (signed char)42;
unsigned char var_6 = (unsigned char)23;
_Bool var_8 = (_Bool)0;
int var_9 = 427646194;
int zero = 0;
unsigned long long int var_11 = 12343221295028192848ULL;
unsigned short var_12 = (unsigned short)38654;
int var_13 = -595788261;
void init() {
}

void checksum() {
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
