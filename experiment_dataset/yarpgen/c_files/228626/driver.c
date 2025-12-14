#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3307995950U;
unsigned int var_3 = 3451721875U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 13832673534516654336ULL;
unsigned int var_7 = 3224916100U;
short var_8 = (short)4117;
unsigned int var_9 = 3478130156U;
short var_10 = (short)2376;
int zero = 0;
unsigned long long int var_12 = 2366186482558659509ULL;
unsigned int var_13 = 2404119130U;
unsigned int var_14 = 630885996U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
