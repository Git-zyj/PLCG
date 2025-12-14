#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6645395387681381375LL;
short var_3 = (short)-17232;
short var_4 = (short)-3871;
short var_5 = (short)23494;
signed char var_7 = (signed char)-14;
unsigned char var_9 = (unsigned char)12;
unsigned char var_14 = (unsigned char)197;
unsigned int var_15 = 4092787563U;
int zero = 0;
signed char var_17 = (signed char)-1;
short var_18 = (short)27219;
unsigned long long int var_19 = 17954080117520844133ULL;
_Bool var_20 = (_Bool)1;
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
