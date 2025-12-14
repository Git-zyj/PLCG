#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10719513785123663353ULL;
short var_3 = (short)601;
int var_4 = -556564476;
unsigned short var_6 = (unsigned short)38265;
_Bool var_7 = (_Bool)1;
int var_9 = -1110489757;
int zero = 0;
short var_10 = (short)18510;
short var_11 = (short)-30369;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
