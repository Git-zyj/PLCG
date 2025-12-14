#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-835;
int var_4 = 626333340;
long long int var_5 = 7457534143354637551LL;
signed char var_9 = (signed char)-90;
unsigned char var_10 = (unsigned char)56;
int zero = 0;
unsigned char var_11 = (unsigned char)179;
short var_12 = (short)12577;
int var_13 = -2073862138;
void init() {
}

void checksum() {
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
