#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2526656060U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 1305415464205079075ULL;
int var_4 = -1590109392;
unsigned short var_5 = (unsigned short)11272;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 15361594754102342482ULL;
int zero = 0;
long long int var_10 = 7261919604672299773LL;
int var_11 = 1227474256;
unsigned short var_12 = (unsigned short)20079;
short var_13 = (short)-18090;
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
