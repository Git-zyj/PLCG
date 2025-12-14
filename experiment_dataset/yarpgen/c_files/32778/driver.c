#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13354;
unsigned char var_1 = (unsigned char)73;
unsigned long long int var_2 = 13153741026202852940ULL;
unsigned long long int var_3 = 6991370719392492745ULL;
long long int var_4 = 8550054077723150820LL;
unsigned int var_5 = 269292866U;
long long int var_7 = 4559534774272712466LL;
long long int var_8 = -2194021870174223527LL;
long long int var_11 = -2278784255051029730LL;
unsigned char var_12 = (unsigned char)62;
int zero = 0;
unsigned long long int var_13 = 12709371159736437615ULL;
long long int var_14 = 7915669037685548545LL;
void init() {
}

void checksum() {
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
