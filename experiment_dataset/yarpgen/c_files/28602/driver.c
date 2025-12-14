#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -395135443;
unsigned short var_5 = (unsigned short)1907;
unsigned long long int var_8 = 2736086802449183292ULL;
short var_9 = (short)2295;
int zero = 0;
int var_19 = -1881127845;
long long int var_20 = 4655645365444300418LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
