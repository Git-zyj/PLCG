#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4133412464216783284LL;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)228;
signed char var_7 = (signed char)-69;
unsigned long long int var_14 = 2856629055618657286ULL;
signed char var_15 = (signed char)-121;
long long int var_17 = -7318956881384930877LL;
long long int var_18 = -7475825771645164404LL;
int zero = 0;
long long int var_19 = 7019655390993338591LL;
int var_20 = -1414331925;
void init() {
}

void checksum() {
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
