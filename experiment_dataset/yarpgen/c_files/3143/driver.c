#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5629417520545509327LL;
long long int var_1 = 2874936022160723139LL;
int var_4 = 1743444499;
unsigned char var_5 = (unsigned char)109;
long long int var_6 = 3587469774700246708LL;
short var_10 = (short)-2600;
short var_12 = (short)17518;
unsigned int var_13 = 1836569780U;
long long int var_15 = -2191202445779358594LL;
unsigned short var_17 = (unsigned short)19906;
int zero = 0;
unsigned char var_18 = (unsigned char)254;
short var_19 = (short)-13165;
long long int var_20 = 4552964393584097713LL;
unsigned int var_21 = 2557503206U;
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
