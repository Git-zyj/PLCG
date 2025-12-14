#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12540;
signed char var_4 = (signed char)116;
unsigned long long int var_7 = 274254495468823289ULL;
short var_8 = (short)-10183;
unsigned long long int var_9 = 6096539177904085631ULL;
int zero = 0;
long long int var_10 = 3222570627914184615LL;
unsigned long long int var_11 = 4971211897958789939ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
