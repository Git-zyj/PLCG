#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8962;
long long int var_1 = 2382312854451289252LL;
long long int var_2 = -2811963490264491384LL;
long long int var_3 = -7339427935384446927LL;
unsigned long long int var_4 = 13437266312591178356ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-112;
int var_8 = 611856513;
long long int var_9 = 6747236779419861543LL;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 2092581434U;
int var_16 = 272002548;
int zero = 0;
long long int var_19 = -3968485222966059686LL;
unsigned char var_20 = (unsigned char)154;
long long int var_21 = 4835964527131513805LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
