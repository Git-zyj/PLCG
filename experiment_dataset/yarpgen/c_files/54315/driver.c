#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1307007731;
unsigned short var_3 = (unsigned short)2414;
unsigned short var_4 = (unsigned short)34523;
unsigned long long int var_6 = 14807917928541471216ULL;
unsigned int var_8 = 4281229158U;
unsigned short var_9 = (unsigned short)15585;
int var_11 = 1170481141;
short var_14 = (short)-2754;
unsigned char var_17 = (unsigned char)193;
int zero = 0;
unsigned short var_18 = (unsigned short)54103;
unsigned short var_19 = (unsigned short)10607;
int var_20 = 816294480;
long long int var_21 = 3996086740840469972LL;
void init() {
}

void checksum() {
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
