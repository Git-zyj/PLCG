#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned char var_2 = (unsigned char)60;
unsigned char var_3 = (unsigned char)167;
unsigned long long int var_4 = 10270816630917218846ULL;
long long int var_6 = -521341476523140764LL;
int var_8 = -1306009476;
unsigned long long int var_9 = 8272843542220900485ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)200;
unsigned long long int var_11 = 4496094422031465435ULL;
unsigned char var_12 = (unsigned char)80;
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
