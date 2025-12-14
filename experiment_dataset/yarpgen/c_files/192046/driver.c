#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34670;
unsigned long long int var_1 = 14600628732503538384ULL;
unsigned int var_9 = 161235929U;
int zero = 0;
unsigned long long int var_14 = 14249149238998989331ULL;
unsigned char var_15 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
