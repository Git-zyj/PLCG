#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1267702656;
int var_5 = 1327669215;
int var_6 = -1517417876;
long long int var_7 = -4426224397366983521LL;
short var_8 = (short)19035;
long long int var_10 = -7449471882670553350LL;
int zero = 0;
unsigned long long int var_11 = 10123597349985323476ULL;
unsigned short var_12 = (unsigned short)54273;
unsigned char var_13 = (unsigned char)251;
void init() {
}

void checksum() {
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
