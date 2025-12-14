#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)64;
int var_6 = -712296048;
int var_7 = -2131938290;
long long int var_8 = -2638605160464699047LL;
signed char var_9 = (signed char)-105;
int zero = 0;
unsigned long long int var_10 = 8211526477056053204ULL;
int var_11 = -1843233441;
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
