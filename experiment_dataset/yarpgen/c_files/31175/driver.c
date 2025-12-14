#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1910059775;
_Bool var_3 = (_Bool)0;
long long int var_4 = -7060275425635802300LL;
signed char var_5 = (signed char)26;
int var_6 = 234041730;
unsigned short var_8 = (unsigned short)13967;
long long int var_9 = 5275874712064523984LL;
unsigned char var_11 = (unsigned char)106;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)55917;
unsigned short var_18 = (unsigned short)47082;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
