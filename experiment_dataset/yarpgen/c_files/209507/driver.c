#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
unsigned long long int var_3 = 8689690307136558028ULL;
unsigned char var_4 = (unsigned char)83;
signed char var_5 = (signed char)-97;
short var_8 = (short)-11971;
signed char var_9 = (signed char)82;
unsigned char var_10 = (unsigned char)243;
unsigned char var_13 = (unsigned char)16;
unsigned int var_14 = 1037283401U;
int zero = 0;
unsigned char var_15 = (unsigned char)46;
unsigned short var_16 = (unsigned short)43645;
int var_17 = -1867604822;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
