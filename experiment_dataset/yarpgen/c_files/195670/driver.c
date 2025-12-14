#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
unsigned int var_3 = 3884621180U;
short var_5 = (short)-29452;
short var_6 = (short)-32581;
signed char var_7 = (signed char)-69;
int var_8 = 815539549;
long long int var_9 = 7914185214516711477LL;
short var_11 = (short)-32295;
int var_12 = 1753994658;
signed char var_13 = (signed char)-70;
unsigned short var_15 = (unsigned short)32069;
int var_16 = -471132824;
int var_19 = -2030691497;
int zero = 0;
int var_20 = -2049674972;
unsigned short var_21 = (unsigned short)54714;
int var_22 = -1597686285;
unsigned char var_23 = (unsigned char)242;
int var_24 = 1307525299;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
