#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60079;
unsigned int var_7 = 2932853989U;
long long int var_8 = -8257253510504880432LL;
unsigned char var_9 = (unsigned char)19;
unsigned short var_11 = (unsigned short)19893;
unsigned char var_13 = (unsigned char)72;
int zero = 0;
int var_16 = -275913370;
unsigned char var_17 = (unsigned char)77;
unsigned short var_18 = (unsigned short)60460;
signed char var_19 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
