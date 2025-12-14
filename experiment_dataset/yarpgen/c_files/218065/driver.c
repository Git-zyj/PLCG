#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7806850790475739485LL;
unsigned char var_4 = (unsigned char)35;
short var_13 = (short)10207;
long long int var_17 = 6808461904368896785LL;
int zero = 0;
short var_18 = (short)23138;
int var_19 = 764797937;
unsigned long long int var_20 = 17792670517319220093ULL;
short var_21 = (short)27191;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
