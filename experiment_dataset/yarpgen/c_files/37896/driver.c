#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13658694449156674769ULL;
unsigned long long int var_2 = 2046067367705919294ULL;
unsigned short var_7 = (unsigned short)10240;
unsigned char var_9 = (unsigned char)237;
unsigned long long int var_14 = 2344666759224312124ULL;
int zero = 0;
unsigned int var_18 = 2673812610U;
unsigned short var_19 = (unsigned short)62112;
void init() {
}

void checksum() {
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
