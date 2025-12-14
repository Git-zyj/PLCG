#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3738089882U;
unsigned int var_2 = 2020673581U;
unsigned int var_3 = 399356279U;
long long int var_5 = 4097557742145263046LL;
unsigned int var_6 = 4193981099U;
int zero = 0;
short var_17 = (short)-20064;
signed char var_18 = (signed char)65;
unsigned char var_19 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
