#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 86351423073983591LL;
_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)31;
unsigned char var_6 = (unsigned char)15;
unsigned long long int var_7 = 13649123603362926273ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)65129;
long long int var_11 = -7581394583822088552LL;
long long int var_12 = -7078490158517679998LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
