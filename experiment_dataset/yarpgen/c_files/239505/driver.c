#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5668193497683004574LL;
unsigned char var_2 = (unsigned char)249;
long long int var_3 = 3974272343272589948LL;
unsigned char var_5 = (unsigned char)162;
unsigned char var_7 = (unsigned char)47;
unsigned char var_9 = (unsigned char)122;
unsigned char var_11 = (unsigned char)252;
int zero = 0;
unsigned char var_20 = (unsigned char)149;
unsigned char var_21 = (unsigned char)120;
long long int var_22 = -4201046161028804245LL;
unsigned char var_23 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
