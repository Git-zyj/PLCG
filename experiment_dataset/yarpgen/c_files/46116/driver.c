#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2019873850;
short var_1 = (short)-3087;
int var_2 = -1635840889;
int var_5 = -1402670438;
unsigned int var_6 = 1513403749U;
unsigned long long int var_8 = 3165497553296304467ULL;
unsigned long long int var_9 = 13828923326033333452ULL;
unsigned long long int var_10 = 8238215161291547239ULL;
unsigned short var_11 = (unsigned short)17039;
int zero = 0;
unsigned long long int var_13 = 15914014876062789507ULL;
unsigned long long int var_14 = 5273465442366129982ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
