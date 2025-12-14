#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6026285791257041344ULL;
unsigned long long int var_2 = 16348528797945993480ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 9640079168080224453ULL;
unsigned long long int var_5 = 7693714997181138617ULL;
unsigned long long int var_6 = 8558205502283585961ULL;
unsigned long long int var_7 = 16989130670895416727ULL;
unsigned long long int var_9 = 14104411688825700471ULL;
int var_10 = 1698710638;
int var_12 = -1240953586;
_Bool var_13 = (_Bool)0;
unsigned long long int var_16 = 3637834325455431093ULL;
int zero = 0;
int var_18 = -444529649;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 15143939302836048494ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
