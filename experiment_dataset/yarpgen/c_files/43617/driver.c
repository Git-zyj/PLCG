#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)35;
unsigned long long int var_8 = 1019415751518075293ULL;
unsigned char var_10 = (unsigned char)155;
long long int var_11 = 4515364442002491944LL;
unsigned long long int var_12 = 591457064485479376ULL;
signed char var_13 = (signed char)-27;
unsigned int var_15 = 3261623548U;
int var_17 = 1617243325;
long long int var_18 = -8342070930678186693LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)34876;
signed char var_21 = (signed char)-3;
unsigned char var_22 = (unsigned char)145;
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
