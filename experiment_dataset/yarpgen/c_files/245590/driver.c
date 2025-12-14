#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-54;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-29140;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int var_6 = -1417097904;
_Bool var_7 = (_Bool)0;
int var_11 = -765363050;
unsigned short var_12 = (unsigned short)1696;
int var_15 = -1598542948;
int zero = 0;
unsigned short var_17 = (unsigned short)58452;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3050620355U;
int var_20 = -723384591;
unsigned short var_21 = (unsigned short)32616;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
