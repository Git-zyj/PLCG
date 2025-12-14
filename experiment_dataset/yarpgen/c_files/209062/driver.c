#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)218;
int var_3 = 2104177970;
long long int var_4 = 2079716758088066005LL;
long long int var_7 = -1581343166934040292LL;
unsigned int var_11 = 2707743762U;
unsigned char var_12 = (unsigned char)242;
int var_13 = -1218543104;
unsigned int var_14 = 824908565U;
long long int var_15 = 767952539845020145LL;
unsigned long long int var_16 = 1227019431715156132ULL;
int zero = 0;
unsigned int var_17 = 2247166891U;
unsigned long long int var_18 = 7292620826409836437ULL;
unsigned char var_19 = (unsigned char)217;
unsigned char var_20 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
