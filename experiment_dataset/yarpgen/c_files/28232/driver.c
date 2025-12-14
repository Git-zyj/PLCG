#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)15966;
unsigned int var_8 = 3098506982U;
short var_11 = (short)18348;
_Bool var_12 = (_Bool)1;
short var_13 = (short)22914;
int zero = 0;
unsigned short var_14 = (unsigned short)56321;
long long int var_15 = 1170008004765209326LL;
long long int var_16 = 2069309777028832633LL;
unsigned char var_17 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
