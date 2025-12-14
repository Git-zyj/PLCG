#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)40700;
int var_9 = 1050351735;
long long int var_11 = -3386354196604627973LL;
unsigned char var_12 = (unsigned char)42;
unsigned short var_16 = (unsigned short)52599;
int zero = 0;
unsigned long long int var_20 = 11059764773025484971ULL;
unsigned char var_21 = (unsigned char)206;
unsigned long long int var_22 = 3688081324733256114ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
