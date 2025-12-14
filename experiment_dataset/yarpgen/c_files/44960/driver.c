#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18098;
unsigned char var_5 = (unsigned char)72;
unsigned long long int var_9 = 4794686137620630776ULL;
signed char var_11 = (signed char)-102;
int var_15 = -955377197;
int zero = 0;
unsigned long long int var_16 = 3547797178408554756ULL;
signed char var_17 = (signed char)-55;
unsigned long long int var_18 = 11332496389851212589ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
