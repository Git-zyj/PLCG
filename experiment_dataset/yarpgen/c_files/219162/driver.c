#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 348711273U;
unsigned long long int var_1 = 18161749518622550458ULL;
int var_2 = -1308498888;
unsigned long long int var_3 = 15497961144543810334ULL;
unsigned short var_4 = (unsigned short)62427;
unsigned short var_5 = (unsigned short)21934;
unsigned long long int var_6 = 8854391161561327852ULL;
unsigned long long int var_7 = 4295943139758017923ULL;
unsigned short var_8 = (unsigned short)19240;
unsigned long long int var_9 = 4586043612982934315ULL;
unsigned int var_10 = 1582153484U;
unsigned long long int var_11 = 4328247206751346839ULL;
unsigned long long int var_12 = 1251211485518064410ULL;
int zero = 0;
unsigned int var_13 = 854680572U;
unsigned long long int var_14 = 11714276921226802331ULL;
int var_15 = -1759073488;
unsigned short var_16 = (unsigned short)40234;
unsigned long long int var_17 = 2740855637833159575ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
