#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17910;
unsigned long long int var_2 = 10968667296813993704ULL;
short var_3 = (short)27844;
unsigned long long int var_4 = 16745593219940191031ULL;
unsigned int var_6 = 650984784U;
unsigned int var_7 = 4198096412U;
short var_8 = (short)-22209;
unsigned long long int var_9 = 17583213259878274738ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 16506328521210574670ULL;
unsigned char var_13 = (unsigned char)9;
int var_14 = -1205021825;
void init() {
}

void checksum() {
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
