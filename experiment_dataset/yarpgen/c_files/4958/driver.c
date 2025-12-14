#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 366363964;
long long int var_8 = -2688186942136560134LL;
unsigned char var_9 = (unsigned char)174;
unsigned short var_10 = (unsigned short)738;
short var_12 = (short)30624;
unsigned long long int var_13 = 2256898904535177404ULL;
int zero = 0;
long long int var_18 = 4973184749547960043LL;
unsigned long long int var_19 = 13446843594149636576ULL;
unsigned long long int var_20 = 3647032309727787944ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
