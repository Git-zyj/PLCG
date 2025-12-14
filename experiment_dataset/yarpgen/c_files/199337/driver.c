#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5160758302797006533LL;
unsigned int var_2 = 435331148U;
long long int var_3 = -7563969326031849552LL;
short var_5 = (short)25456;
unsigned long long int var_6 = 15026119093321712857ULL;
unsigned char var_7 = (unsigned char)221;
unsigned int var_9 = 3550328051U;
int zero = 0;
signed char var_10 = (signed char)18;
unsigned long long int var_11 = 9347360829307894705ULL;
signed char var_12 = (signed char)112;
int var_13 = -1482230230;
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
