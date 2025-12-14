#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5293596643951369682LL;
unsigned short var_3 = (unsigned short)31567;
unsigned long long int var_8 = 17916954220309055329ULL;
int zero = 0;
int var_12 = -509523389;
unsigned long long int var_13 = 2205053523659215292ULL;
signed char var_14 = (signed char)120;
signed char var_15 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
