#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22716;
unsigned long long int var_9 = 14791846766231415121ULL;
unsigned int var_16 = 3266982119U;
int var_18 = -618673290;
int zero = 0;
int var_19 = -1369806557;
unsigned short var_20 = (unsigned short)36514;
long long int var_21 = -5696410257056908206LL;
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
