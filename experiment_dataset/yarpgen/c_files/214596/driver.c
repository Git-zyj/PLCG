#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9083910637115796365LL;
long long int var_3 = 803168379919756215LL;
unsigned short var_4 = (unsigned short)5939;
unsigned int var_6 = 3440390770U;
long long int var_7 = -8949954654667606910LL;
short var_8 = (short)-26787;
long long int var_10 = -1475578873607772520LL;
long long int var_11 = -8561021474425087422LL;
unsigned int var_13 = 3350171176U;
unsigned int var_14 = 3356824983U;
int zero = 0;
unsigned long long int var_15 = 5548090813048480400ULL;
long long int var_16 = 7217085953326693227LL;
long long int var_17 = 5223074891952407174LL;
void init() {
}

void checksum() {
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
