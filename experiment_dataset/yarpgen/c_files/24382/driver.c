#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59545;
signed char var_2 = (signed char)-125;
short var_4 = (short)-7569;
unsigned long long int var_7 = 17912195275907064355ULL;
unsigned short var_10 = (unsigned short)43813;
unsigned long long int var_14 = 924729444949111181ULL;
long long int var_16 = 1383738729653643563LL;
int zero = 0;
unsigned long long int var_17 = 8735766151450205050ULL;
long long int var_18 = -3907986557901945205LL;
signed char var_19 = (signed char)38;
signed char var_20 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
