#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -227856154;
signed char var_2 = (signed char)-29;
unsigned int var_3 = 356441210U;
unsigned long long int var_4 = 5256279485476481626ULL;
unsigned long long int var_6 = 15166715468158690483ULL;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int var_13 = 668445408;
int zero = 0;
int var_15 = 638932822;
unsigned int var_16 = 3423257394U;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 11997668526581188345ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
