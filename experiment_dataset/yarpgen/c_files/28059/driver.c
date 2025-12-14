#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3640424268U;
long long int var_2 = -8130239282156634657LL;
unsigned int var_3 = 920893010U;
long long int var_4 = -1936329846205946591LL;
unsigned short var_5 = (unsigned short)16895;
long long int var_6 = 9098148639827082400LL;
unsigned short var_8 = (unsigned short)26966;
short var_9 = (short)28281;
unsigned short var_11 = (unsigned short)31902;
long long int var_14 = 6266767489848927219LL;
long long int var_16 = -7767377636704835944LL;
short var_17 = (short)16319;
int zero = 0;
unsigned long long int var_20 = 11744647065306950463ULL;
unsigned int var_21 = 4076401022U;
short var_22 = (short)-18088;
void init() {
}

void checksum() {
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
