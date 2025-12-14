#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6706559538181482412LL;
unsigned int var_2 = 2292197618U;
signed char var_3 = (signed char)81;
signed char var_5 = (signed char)127;
long long int var_7 = 2712960948743564468LL;
short var_8 = (short)-25634;
signed char var_9 = (signed char)-11;
short var_11 = (short)-29688;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)2942;
int var_14 = -2036461296;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
