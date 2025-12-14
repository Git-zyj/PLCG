#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1597981841066179393LL;
unsigned long long int var_2 = 7533929315368808311ULL;
unsigned long long int var_9 = 14993392748213878544ULL;
int var_14 = -1785533624;
int zero = 0;
short var_20 = (short)-7562;
unsigned long long int var_21 = 2746247029614070332ULL;
signed char var_22 = (signed char)98;
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
