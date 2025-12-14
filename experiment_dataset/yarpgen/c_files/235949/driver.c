#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6916132540184541454LL;
unsigned char var_4 = (unsigned char)34;
unsigned short var_5 = (unsigned short)9328;
unsigned int var_6 = 3386309846U;
unsigned int var_8 = 718643902U;
unsigned short var_9 = (unsigned short)11534;
int zero = 0;
signed char var_10 = (signed char)111;
unsigned char var_11 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
