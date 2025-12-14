#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2043773018;
_Bool var_5 = (_Bool)0;
long long int var_6 = 5904786966617380566LL;
short var_10 = (short)-16174;
int zero = 0;
short var_19 = (short)-26275;
unsigned long long int var_20 = 4571023659979768610ULL;
long long int var_21 = -132682470044897972LL;
int var_22 = 5045082;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
