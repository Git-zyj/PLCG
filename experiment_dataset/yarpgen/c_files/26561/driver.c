#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4430259878738075539LL;
unsigned short var_2 = (unsigned short)50533;
unsigned short var_3 = (unsigned short)2421;
unsigned short var_4 = (unsigned short)28244;
unsigned short var_5 = (unsigned short)7054;
unsigned short var_6 = (unsigned short)53;
unsigned short var_9 = (unsigned short)62650;
long long int var_10 = 5065080559078401200LL;
long long int var_11 = -3169624706655803141LL;
int zero = 0;
long long int var_13 = -2229952296423161146LL;
long long int var_14 = 1053945853444060865LL;
long long int var_15 = -1428425071027987646LL;
long long int var_16 = 8970216733471093579LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
