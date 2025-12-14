#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-101;
signed char var_6 = (signed char)-88;
unsigned long long int var_7 = 13523169779918135681ULL;
unsigned int var_8 = 1600915485U;
int var_9 = -769548875;
unsigned char var_13 = (unsigned char)123;
int zero = 0;
short var_19 = (short)-22169;
unsigned short var_20 = (unsigned short)32750;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1620147032U;
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
