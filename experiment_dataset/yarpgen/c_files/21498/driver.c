#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4237328764U;
short var_2 = (short)-10862;
unsigned int var_3 = 1535608308U;
short var_4 = (short)-26917;
unsigned int var_5 = 2987584738U;
unsigned int var_8 = 4277269196U;
unsigned int var_9 = 924097110U;
int zero = 0;
short var_10 = (short)20319;
unsigned int var_11 = 153079466U;
short var_12 = (short)-18437;
unsigned int var_13 = 633377032U;
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
