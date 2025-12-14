#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11580105643019941199ULL;
unsigned long long int var_2 = 10875277876771398486ULL;
unsigned char var_4 = (unsigned char)89;
short var_6 = (short)5829;
unsigned int var_9 = 1367064292U;
int zero = 0;
unsigned char var_10 = (unsigned char)207;
short var_11 = (short)-356;
int var_12 = 306575933;
unsigned int var_13 = 2724764176U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
