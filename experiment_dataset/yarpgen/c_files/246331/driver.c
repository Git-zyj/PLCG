#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6397785020123534480ULL;
short var_4 = (short)7485;
unsigned long long int var_5 = 16189565973542838842ULL;
unsigned long long int var_10 = 10635990523215672078ULL;
unsigned long long int var_13 = 4423796186168320024ULL;
short var_17 = (short)-30160;
unsigned long long int var_18 = 3869814078500783607ULL;
short var_19 = (short)-30051;
int zero = 0;
short var_20 = (short)-24852;
unsigned long long int var_21 = 16024290164488517152ULL;
unsigned long long int var_22 = 523317885501978370ULL;
short var_23 = (short)27425;
short var_24 = (short)14583;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
