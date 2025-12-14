#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -954437190090586446LL;
long long int var_5 = -472861495786674781LL;
signed char var_6 = (signed char)-110;
long long int var_11 = -1373120680132944086LL;
int zero = 0;
unsigned short var_13 = (unsigned short)10824;
unsigned long long int var_14 = 9398953110487611278ULL;
signed char var_15 = (signed char)78;
signed char var_16 = (signed char)95;
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
