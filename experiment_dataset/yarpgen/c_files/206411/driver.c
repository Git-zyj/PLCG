#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10655799141728893918ULL;
unsigned short var_1 = (unsigned short)23142;
signed char var_3 = (signed char)-38;
unsigned long long int var_9 = 8624338158766664617ULL;
int zero = 0;
unsigned long long int var_11 = 8039912211643512124ULL;
unsigned char var_12 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
