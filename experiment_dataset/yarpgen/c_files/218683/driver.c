#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7959;
unsigned long long int var_3 = 3307676720247916632ULL;
unsigned int var_4 = 104977692U;
int var_6 = -1045934610;
long long int var_7 = -5885366823080272876LL;
unsigned int var_10 = 682490876U;
long long int var_11 = 5135040050583328275LL;
int var_14 = 1792456702;
unsigned long long int var_16 = 10050014715215450922ULL;
short var_17 = (short)26115;
short var_18 = (short)-10839;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3210017579U;
unsigned int var_21 = 2825142939U;
unsigned short var_22 = (unsigned short)19772;
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
