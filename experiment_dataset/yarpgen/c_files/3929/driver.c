#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6395540155850810089LL;
int var_1 = -901454875;
unsigned int var_3 = 2977597512U;
unsigned char var_4 = (unsigned char)251;
unsigned long long int var_5 = 15489446108640820497ULL;
long long int var_6 = 7981220959339524651LL;
int zero = 0;
signed char var_13 = (signed char)-11;
long long int var_14 = -8200654925611464413LL;
int var_15 = -852025032;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
