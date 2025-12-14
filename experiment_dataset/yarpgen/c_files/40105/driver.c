#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3675059321585813839LL;
long long int var_2 = 6136293386663653218LL;
unsigned char var_4 = (unsigned char)121;
signed char var_5 = (signed char)-108;
long long int var_8 = -1699425626366311763LL;
unsigned long long int var_10 = 3090314501233830471ULL;
unsigned short var_11 = (unsigned short)14787;
long long int var_12 = -6656634694648545875LL;
unsigned long long int var_15 = 10194306756960440287ULL;
int zero = 0;
long long int var_16 = -8142811009727138097LL;
unsigned short var_17 = (unsigned short)8487;
void init() {
}

void checksum() {
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
