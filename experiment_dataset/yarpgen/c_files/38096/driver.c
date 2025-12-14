#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)100;
int var_3 = -2071845276;
unsigned long long int var_5 = 6637668243346335145ULL;
unsigned short var_6 = (unsigned short)37497;
signed char var_7 = (signed char)-85;
unsigned long long int var_9 = 1626147923554933129ULL;
signed char var_10 = (signed char)-106;
long long int var_11 = 1995463516539935030LL;
int zero = 0;
long long int var_12 = -3153751953726279899LL;
unsigned int var_13 = 3953048149U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
