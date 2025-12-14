#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 523791550195875304ULL;
unsigned char var_3 = (unsigned char)168;
long long int var_8 = -5879605220413936908LL;
unsigned short var_9 = (unsigned short)19060;
int zero = 0;
unsigned long long int var_10 = 11764660995678386294ULL;
unsigned char var_11 = (unsigned char)171;
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
