#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -38149806;
unsigned long long int var_9 = 18054527112437608297ULL;
int var_10 = -1661103941;
int var_12 = 726835881;
unsigned char var_13 = (unsigned char)129;
int zero = 0;
short var_19 = (short)-18404;
unsigned long long int var_20 = 1953973394099109613ULL;
unsigned short var_21 = (unsigned short)35253;
unsigned char var_22 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
