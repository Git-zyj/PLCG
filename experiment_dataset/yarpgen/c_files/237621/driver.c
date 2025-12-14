#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4026763059533475849LL;
unsigned short var_9 = (unsigned short)38074;
unsigned long long int var_11 = 13749306823435752727ULL;
long long int var_13 = 2744331590595552523LL;
int zero = 0;
unsigned short var_16 = (unsigned short)18737;
unsigned short var_17 = (unsigned short)58424;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
