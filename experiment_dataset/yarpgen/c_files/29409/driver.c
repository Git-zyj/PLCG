#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)16891;
short var_5 = (short)-2134;
long long int var_7 = -1053615926711020649LL;
unsigned short var_13 = (unsigned short)21370;
int zero = 0;
signed char var_14 = (signed char)-107;
unsigned long long int var_15 = 8818964051454956207ULL;
unsigned long long int var_16 = 16445284167777749029ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
