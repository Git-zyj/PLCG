#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
long long int var_1 = -933466595300331687LL;
short var_3 = (short)24427;
_Bool var_5 = (_Bool)0;
long long int var_9 = 5614827110550572295LL;
unsigned short var_12 = (unsigned short)10864;
int var_16 = -1837589626;
short var_18 = (short)-2290;
unsigned short var_19 = (unsigned short)41092;
int zero = 0;
signed char var_20 = (signed char)-116;
long long int var_21 = -2925964990296184031LL;
void init() {
}

void checksum() {
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
