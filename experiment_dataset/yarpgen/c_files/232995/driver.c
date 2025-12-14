#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -6180337721687735220LL;
signed char var_11 = (signed char)111;
unsigned long long int var_13 = 982392308935685164ULL;
unsigned int var_15 = 1838728900U;
unsigned int var_16 = 4017345785U;
unsigned long long int var_18 = 4723992384695928402ULL;
int zero = 0;
unsigned long long int var_19 = 13861582171214005256ULL;
unsigned long long int var_20 = 1220611840318564950ULL;
int var_21 = -240816528;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
