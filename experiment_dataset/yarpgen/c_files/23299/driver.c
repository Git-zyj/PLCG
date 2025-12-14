#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)46;
unsigned long long int var_4 = 12339253801747870502ULL;
unsigned long long int var_6 = 915035844533693489ULL;
long long int var_7 = -7075060773159348535LL;
int var_8 = 1903794271;
unsigned long long int var_10 = 13486254915139338022ULL;
int zero = 0;
unsigned long long int var_11 = 16229765041648108126ULL;
int var_12 = 460488283;
long long int var_13 = 3346074204277895264LL;
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
