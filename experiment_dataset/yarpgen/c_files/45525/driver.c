#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -368244290;
unsigned long long int var_2 = 1694824846158498846ULL;
unsigned long long int var_3 = 10907972852604610247ULL;
unsigned char var_4 = (unsigned char)84;
unsigned long long int var_6 = 13009904613485777179ULL;
unsigned char var_8 = (unsigned char)71;
unsigned int var_9 = 743568948U;
unsigned long long int var_10 = 16806841587316979389ULL;
int zero = 0;
unsigned long long int var_12 = 17039472292151250363ULL;
int var_13 = 1895016447;
void init() {
}

void checksum() {
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
