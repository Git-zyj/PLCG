#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 927902381754642412ULL;
unsigned long long int var_5 = 11638878561044425787ULL;
unsigned long long int var_6 = 17128904486254038650ULL;
long long int var_8 = 5973258529312879915LL;
long long int var_9 = -8207250268941985956LL;
int var_12 = 930056720;
int zero = 0;
long long int var_15 = 4887642811998901077LL;
short var_16 = (short)32521;
void init() {
}

void checksum() {
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
