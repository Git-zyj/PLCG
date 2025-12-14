#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15003;
long long int var_1 = -3564043854011640968LL;
long long int var_2 = 7902707567884383971LL;
unsigned long long int var_3 = 15968366179871547691ULL;
long long int var_6 = -7802306260619230457LL;
int var_8 = 1604485048;
unsigned char var_9 = (unsigned char)10;
unsigned int var_10 = 2355903535U;
unsigned short var_11 = (unsigned short)19189;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 7435980489672156180LL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
