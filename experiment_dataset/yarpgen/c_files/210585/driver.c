#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6275;
unsigned int var_2 = 1549244957U;
long long int var_3 = 4600562011693639197LL;
long long int var_9 = 5035986153528447593LL;
int zero = 0;
long long int var_10 = 330751452147145054LL;
short var_11 = (short)-7103;
unsigned long long int var_12 = 15463665585202222462ULL;
unsigned short var_13 = (unsigned short)41964;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
