#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
unsigned int var_2 = 1082856645U;
unsigned char var_8 = (unsigned char)191;
unsigned int var_9 = 912379024U;
int var_10 = -1342523203;
unsigned char var_13 = (unsigned char)172;
unsigned short var_15 = (unsigned short)4934;
long long int var_16 = 2034993481626063668LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)58;
unsigned char var_22 = (unsigned char)64;
unsigned char var_23 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
