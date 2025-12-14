#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1064763513;
unsigned char var_7 = (unsigned char)4;
int var_10 = -156723684;
int var_11 = -1219231138;
int zero = 0;
signed char var_12 = (signed char)-3;
long long int var_13 = -2946391530510628073LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
