#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)32002;
unsigned char var_8 = (unsigned char)57;
long long int var_10 = -4179117314538162060LL;
signed char var_14 = (signed char)-106;
unsigned long long int var_15 = 15659116501071799463ULL;
int zero = 0;
unsigned long long int var_20 = 16224774130721033586ULL;
unsigned long long int var_21 = 8023745215000195315ULL;
void init() {
}

void checksum() {
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
