#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-40;
short var_2 = (short)24620;
long long int var_3 = 5349663824149037491LL;
unsigned long long int var_4 = 14502957879592853750ULL;
signed char var_5 = (signed char)-26;
short var_9 = (short)-9806;
short var_10 = (short)5519;
unsigned long long int var_11 = 10936274550390756009ULL;
unsigned char var_13 = (unsigned char)12;
int zero = 0;
unsigned int var_15 = 1578382264U;
_Bool var_16 = (_Bool)1;
int var_17 = -1801130563;
unsigned int var_18 = 3054342039U;
short var_19 = (short)-25038;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
