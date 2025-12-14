#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)75;
int var_2 = 444344236;
short var_6 = (short)13083;
unsigned short var_9 = (unsigned short)53228;
signed char var_16 = (signed char)117;
int zero = 0;
unsigned char var_19 = (unsigned char)32;
unsigned long long int var_20 = 10898888662294899876ULL;
unsigned int var_21 = 2828230467U;
void init() {
}

void checksum() {
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
