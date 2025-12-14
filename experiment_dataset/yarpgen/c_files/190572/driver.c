#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23133;
int var_1 = -450126321;
long long int var_2 = 1067198486514131097LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -2413928460892332551LL;
long long int var_5 = -2546395824340058509LL;
int zero = 0;
unsigned long long int var_10 = 1142554075568074334ULL;
_Bool var_11 = (_Bool)0;
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
