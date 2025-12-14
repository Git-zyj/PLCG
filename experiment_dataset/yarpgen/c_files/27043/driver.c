#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-105;
short var_2 = (short)-5107;
unsigned long long int var_4 = 13139424884440002623ULL;
short var_5 = (short)-3081;
int var_6 = -930689213;
int var_8 = 581370195;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-82;
_Bool var_13 = (_Bool)0;
short var_17 = (short)10637;
int zero = 0;
unsigned short var_18 = (unsigned short)7331;
int var_19 = 156392958;
long long int var_20 = 5082516768918769639LL;
void init() {
}

void checksum() {
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
