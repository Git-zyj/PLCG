#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1894232549U;
unsigned long long int var_5 = 16921635646864180059ULL;
unsigned short var_6 = (unsigned short)7372;
unsigned long long int var_8 = 4215299625442473125ULL;
unsigned short var_10 = (unsigned short)54741;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-22111;
long long int var_19 = -913243951369232510LL;
unsigned char var_20 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
