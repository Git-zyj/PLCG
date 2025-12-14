#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 10281307270438882711ULL;
int var_5 = 1718207628;
unsigned long long int var_6 = 13465980097007706917ULL;
unsigned long long int var_9 = 6343675192568380239ULL;
unsigned char var_11 = (unsigned char)64;
unsigned long long int var_14 = 3394363981848718592ULL;
unsigned short var_15 = (unsigned short)57478;
unsigned long long int var_16 = 10166346955185310939ULL;
unsigned int var_17 = 3710136500U;
int zero = 0;
unsigned long long int var_19 = 13030441849531169577ULL;
unsigned short var_20 = (unsigned short)57043;
unsigned long long int var_21 = 9445492124875098063ULL;
int var_22 = 709565999;
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
