#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1163989038;
long long int var_1 = -6967050591897936809LL;
unsigned char var_2 = (unsigned char)214;
long long int var_3 = -5979183743505047699LL;
int var_7 = 794578;
unsigned long long int var_8 = 577057392165626318ULL;
short var_9 = (short)14801;
int zero = 0;
unsigned int var_11 = 92067785U;
long long int var_12 = 7109291598549097243LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
