#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1262945769;
_Bool var_2 = (_Bool)0;
unsigned int var_5 = 4210009094U;
short var_6 = (short)-20399;
signed char var_7 = (signed char)-96;
int var_12 = 639152772;
int var_14 = -867852717;
unsigned short var_16 = (unsigned short)38356;
unsigned char var_18 = (unsigned char)238;
int zero = 0;
int var_19 = 1320260957;
signed char var_20 = (signed char)-121;
unsigned int var_21 = 1588227959U;
long long int var_22 = -6653318245246596824LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
