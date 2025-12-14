#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18546;
int var_2 = -1053034995;
int var_4 = -915492478;
unsigned long long int var_6 = 11781747711408187562ULL;
unsigned long long int var_8 = 15330854870034592625ULL;
long long int var_9 = -7244749846507160457LL;
int zero = 0;
unsigned short var_10 = (unsigned short)51968;
unsigned long long int var_11 = 16649005802035748658ULL;
unsigned long long int var_12 = 8818892580732288231ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
