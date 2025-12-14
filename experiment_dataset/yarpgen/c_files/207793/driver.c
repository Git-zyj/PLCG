#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)220;
signed char var_2 = (signed char)119;
unsigned char var_4 = (unsigned char)21;
_Bool var_5 = (_Bool)0;
long long int var_6 = -4811178321190505416LL;
unsigned long long int var_8 = 10801820599392543078ULL;
unsigned long long int var_9 = 10616465055676808765ULL;
long long int var_11 = 1894216776074675030LL;
int zero = 0;
long long int var_12 = 115723850649754491LL;
long long int var_13 = -9121327891527611608LL;
short var_14 = (short)-6697;
int var_15 = -269586651;
unsigned int var_16 = 3629793706U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
