#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42495;
unsigned long long int var_1 = 16144718196609792025ULL;
unsigned char var_3 = (unsigned char)108;
unsigned short var_4 = (unsigned short)29653;
unsigned long long int var_5 = 10162113033093302592ULL;
signed char var_9 = (signed char)-110;
int zero = 0;
unsigned char var_10 = (unsigned char)71;
unsigned short var_11 = (unsigned short)54080;
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
