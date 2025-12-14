#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)27950;
unsigned int var_8 = 1927088102U;
unsigned long long int var_10 = 12585515659538889595ULL;
unsigned long long int var_15 = 2487640964482811246ULL;
unsigned char var_17 = (unsigned char)63;
int zero = 0;
long long int var_18 = 6086463894582147626LL;
long long int var_19 = -2533072094950785822LL;
void init() {
}

void checksum() {
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
