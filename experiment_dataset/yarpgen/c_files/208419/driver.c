#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
int var_2 = -2126083004;
unsigned char var_3 = (unsigned char)5;
unsigned long long int var_4 = 10760869963232405025ULL;
unsigned int var_5 = 3138716672U;
unsigned short var_7 = (unsigned short)54676;
int var_8 = 1528696592;
signed char var_11 = (signed char)29;
int zero = 0;
long long int var_12 = 5667086402627545501LL;
unsigned int var_13 = 3430752268U;
_Bool var_14 = (_Bool)0;
long long int var_15 = -5761449986480560542LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
