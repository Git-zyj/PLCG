#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1475983348;
short var_1 = (short)5140;
long long int var_2 = -6762597577843856260LL;
unsigned char var_4 = (unsigned char)105;
unsigned short var_5 = (unsigned short)8160;
short var_6 = (short)1832;
unsigned int var_7 = 3019702271U;
unsigned char var_8 = (unsigned char)243;
int var_9 = -171674317;
long long int var_10 = 2375549264632740342LL;
unsigned short var_11 = (unsigned short)57446;
int zero = 0;
unsigned long long int var_12 = 10842870034445048945ULL;
int var_13 = 1752634502;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
