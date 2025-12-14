#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7386270611485450360LL;
unsigned short var_12 = (unsigned short)60426;
long long int var_14 = 200559598726717461LL;
long long int var_16 = -5497188754338766377LL;
int zero = 0;
long long int var_18 = -808932985826354052LL;
unsigned char var_19 = (unsigned char)98;
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
