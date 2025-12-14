#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18076262028334543209ULL;
long long int var_4 = 7981224412274615622LL;
unsigned long long int var_9 = 2981015208336637992ULL;
signed char var_10 = (signed char)-79;
short var_15 = (short)-2287;
long long int var_16 = 2632472411882888563LL;
int zero = 0;
signed char var_17 = (signed char)-85;
unsigned long long int var_18 = 7512355992291090353ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
