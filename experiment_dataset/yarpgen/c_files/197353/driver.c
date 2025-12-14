#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1794763735766366767ULL;
signed char var_3 = (signed char)116;
signed char var_9 = (signed char)3;
long long int var_10 = -5441436657929175956LL;
int zero = 0;
unsigned long long int var_12 = 8035505590164460136ULL;
long long int var_13 = 5160704415579209983LL;
void init() {
}

void checksum() {
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
