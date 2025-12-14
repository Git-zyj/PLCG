#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 4804540185221185107LL;
unsigned long long int var_11 = 17810967295248850808ULL;
unsigned long long int var_12 = 3461652416033268766ULL;
int zero = 0;
unsigned long long int var_15 = 15352142320062810286ULL;
unsigned short var_16 = (unsigned short)15884;
short var_17 = (short)29070;
unsigned char var_18 = (unsigned char)188;
unsigned short var_19 = (unsigned short)40509;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
