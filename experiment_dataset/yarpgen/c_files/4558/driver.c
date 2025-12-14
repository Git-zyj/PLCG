#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9029144481705898278LL;
int var_4 = 1988375391;
short var_7 = (short)17430;
short var_8 = (short)-6747;
_Bool var_11 = (_Bool)0;
int var_14 = -740078495;
unsigned long long int var_15 = 10460764119461926545ULL;
int zero = 0;
short var_17 = (short)-26582;
int var_18 = 1316848156;
short var_19 = (short)6221;
unsigned long long int var_20 = 3319884584703846299ULL;
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
