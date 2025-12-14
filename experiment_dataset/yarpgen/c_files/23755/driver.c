#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-93;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 11239132902664272583ULL;
unsigned char var_5 = (unsigned char)176;
signed char var_8 = (signed char)-17;
int zero = 0;
signed char var_11 = (signed char)-113;
long long int var_12 = 4201764552948840917LL;
short var_13 = (short)-17476;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
