#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1227617120;
unsigned long long int var_1 = 4965573800804923149ULL;
unsigned int var_6 = 3706007689U;
int var_9 = 2113435227;
int var_10 = -1860813343;
short var_11 = (short)11074;
int var_12 = -1364293605;
unsigned long long int var_13 = 11614562468238840731ULL;
int var_16 = -1134399839;
unsigned long long int var_18 = 11788227016175468593ULL;
int zero = 0;
unsigned long long int var_19 = 3557967804014194516ULL;
unsigned short var_20 = (unsigned short)32101;
unsigned long long int var_21 = 3002016808965559339ULL;
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
