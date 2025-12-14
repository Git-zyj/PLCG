#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1422843360;
unsigned short var_2 = (unsigned short)2525;
short var_3 = (short)32627;
signed char var_5 = (signed char)-125;
int var_8 = 1959397420;
short var_12 = (short)16961;
long long int var_14 = 7933319792589716678LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 17605911113124616925ULL;
int var_18 = 1292074340;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)192;
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
