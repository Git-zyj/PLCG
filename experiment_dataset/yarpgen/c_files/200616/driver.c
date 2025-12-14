#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1364697148663895037ULL;
unsigned short var_3 = (unsigned short)57663;
int var_14 = -955194042;
int zero = 0;
signed char var_19 = (signed char)108;
unsigned char var_20 = (unsigned char)255;
unsigned int var_21 = 414323949U;
unsigned char var_22 = (unsigned char)110;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
