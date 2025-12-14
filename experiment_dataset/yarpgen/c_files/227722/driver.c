#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2137834218;
int var_1 = 2145699063;
int var_2 = -878120545;
unsigned long long int var_4 = 2195992491410561900ULL;
int var_6 = -1243410488;
unsigned long long int var_8 = 17723665039797732588ULL;
long long int var_11 = -4600363579431261888LL;
signed char var_12 = (signed char)103;
int zero = 0;
short var_15 = (short)13013;
long long int var_16 = -5107722563538971906LL;
unsigned long long int var_17 = 14417459557145824712ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
