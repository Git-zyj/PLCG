#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7067213040368330170ULL;
int var_7 = 424318978;
unsigned short var_8 = (unsigned short)13093;
unsigned char var_14 = (unsigned char)153;
int zero = 0;
unsigned char var_19 = (unsigned char)102;
int var_20 = 818188804;
unsigned long long int var_21 = 3199430686428479586ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
