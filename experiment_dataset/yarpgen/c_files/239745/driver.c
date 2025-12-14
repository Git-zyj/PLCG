#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1073255608649242866LL;
unsigned char var_4 = (unsigned char)66;
unsigned long long int var_11 = 942057420524073074ULL;
short var_15 = (short)28586;
int zero = 0;
unsigned char var_19 = (unsigned char)93;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)21140;
void init() {
}

void checksum() {
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
