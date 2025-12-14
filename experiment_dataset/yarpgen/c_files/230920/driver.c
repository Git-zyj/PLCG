#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3784780110U;
unsigned int var_1 = 2743614139U;
signed char var_4 = (signed char)25;
unsigned short var_5 = (unsigned short)60911;
long long int var_6 = -5141149795354682579LL;
short var_7 = (short)9255;
unsigned long long int var_8 = 4080421423052610041ULL;
unsigned long long int var_9 = 8326744104653628984ULL;
unsigned char var_10 = (unsigned char)14;
short var_14 = (short)-27123;
unsigned char var_15 = (unsigned char)206;
signed char var_18 = (signed char)42;
int zero = 0;
unsigned int var_19 = 2447096807U;
long long int var_20 = 2554090448886132784LL;
long long int var_21 = -2652083984925643588LL;
long long int var_22 = -1983053080036274796LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
