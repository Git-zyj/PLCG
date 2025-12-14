#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -3159838075345011570LL;
unsigned long long int var_12 = 13123117412932528708ULL;
long long int var_14 = 8984834515843199453LL;
int zero = 0;
unsigned int var_19 = 2624553321U;
unsigned char var_20 = (unsigned char)68;
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
