#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43776;
unsigned int var_4 = 1457546615U;
long long int var_8 = -7081791418162446561LL;
int zero = 0;
unsigned long long int var_10 = 10466625272185285577ULL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)20144;
long long int var_13 = 4528658765277227276LL;
unsigned char var_14 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
