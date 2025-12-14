#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -194101514405077049LL;
long long int var_4 = 5225551361325003369LL;
unsigned long long int var_11 = 7901190438682885195ULL;
long long int var_15 = -8368112542455300400LL;
int zero = 0;
unsigned char var_16 = (unsigned char)181;
unsigned short var_17 = (unsigned short)27475;
long long int var_18 = -4010933722694511138LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
