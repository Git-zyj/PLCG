#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 202082133;
unsigned long long int var_1 = 3136848944580229130ULL;
int var_2 = 1050299201;
unsigned long long int var_3 = 13282020994778179501ULL;
unsigned long long int var_4 = 11650274642091776329ULL;
unsigned long long int var_5 = 7083225120353929766ULL;
unsigned long long int var_6 = 9502636093624790456ULL;
int var_7 = 419754604;
int var_8 = 769229090;
unsigned long long int var_9 = 10147321342446932432ULL;
unsigned long long int var_10 = 16846229798180682363ULL;
unsigned long long int var_11 = 10499864723486899786ULL;
int zero = 0;
int var_12 = 389489113;
unsigned long long int var_13 = 5719461409988750752ULL;
int var_14 = -1545774766;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
