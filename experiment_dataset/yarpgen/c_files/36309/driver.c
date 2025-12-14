#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
long long int var_3 = -3730990950062453971LL;
unsigned long long int var_5 = 7221343738677513678ULL;
unsigned short var_6 = (unsigned short)4568;
short var_7 = (short)30810;
signed char var_8 = (signed char)70;
int zero = 0;
unsigned long long int var_10 = 4567602117666939461ULL;
unsigned long long int var_11 = 5761992783550678670ULL;
long long int var_12 = 4643957006752013086LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
