#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 867110571377596067ULL;
unsigned long long int var_1 = 18413571767433449644ULL;
unsigned long long int var_2 = 4718576594551519776ULL;
unsigned char var_3 = (unsigned char)158;
unsigned long long int var_4 = 2874573806098507610ULL;
long long int var_7 = 8070711202087696502LL;
unsigned int var_8 = 713180074U;
unsigned long long int var_10 = 14154091658077894176ULL;
unsigned int var_12 = 3507888851U;
unsigned int var_14 = 2141976924U;
int zero = 0;
unsigned char var_15 = (unsigned char)169;
long long int var_16 = 1468787540934219910LL;
unsigned long long int var_17 = 11960497139780071584ULL;
unsigned long long int var_18 = 4110326031907637249ULL;
long long int var_19 = -5636123049018151571LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
