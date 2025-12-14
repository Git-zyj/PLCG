#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32462;
signed char var_3 = (signed char)-62;
int var_4 = -1742275377;
long long int var_10 = -7809334324856576700LL;
unsigned short var_11 = (unsigned short)52365;
signed char var_12 = (signed char)-4;
signed char var_13 = (signed char)90;
long long int var_14 = 6283847906176816584LL;
long long int var_15 = -6167788873947127234LL;
long long int var_17 = -7193667122525194218LL;
int zero = 0;
short var_18 = (short)-102;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
