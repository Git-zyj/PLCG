#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60590;
unsigned int var_4 = 2442720356U;
unsigned long long int var_5 = 12834843125224055968ULL;
unsigned int var_10 = 3722489398U;
long long int var_11 = 4763465157695015796LL;
unsigned int var_14 = 3918347728U;
int zero = 0;
unsigned long long int var_16 = 1427554156183406978ULL;
long long int var_17 = -4944242023949067336LL;
unsigned char var_18 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
