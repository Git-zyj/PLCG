#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5985162056670230017LL;
short var_2 = (short)-19496;
_Bool var_4 = (_Bool)0;
long long int var_5 = -2402001619960978669LL;
long long int var_6 = 4736468421047130559LL;
short var_7 = (short)-4717;
unsigned short var_8 = (unsigned short)34280;
unsigned char var_9 = (unsigned char)53;
unsigned long long int var_10 = 12094710811697397030ULL;
int zero = 0;
short var_12 = (short)-2403;
unsigned long long int var_13 = 13413748606460546995ULL;
unsigned long long int var_14 = 7233673218986375390ULL;
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
