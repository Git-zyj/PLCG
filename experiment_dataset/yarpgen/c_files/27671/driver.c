#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)222;
int var_7 = -918945915;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 18017167253270062157ULL;
unsigned char var_11 = (unsigned char)123;
unsigned int var_12 = 3341233221U;
int var_13 = -1874701776;
unsigned short var_14 = (unsigned short)897;
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
