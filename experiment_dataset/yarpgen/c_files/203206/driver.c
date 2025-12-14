#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53131;
short var_2 = (short)-30261;
unsigned int var_4 = 2286144039U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 14498644954210156286ULL;
unsigned short var_9 = (unsigned short)54296;
unsigned long long int var_10 = 8473129120592852382ULL;
unsigned short var_13 = (unsigned short)36610;
int var_14 = 323112353;
unsigned long long int var_15 = 6728381270462171823ULL;
int zero = 0;
unsigned long long int var_17 = 6247852146400715485ULL;
int var_18 = -927002902;
unsigned short var_19 = (unsigned short)30338;
int var_20 = -575640394;
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
