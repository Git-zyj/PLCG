#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 536467994U;
signed char var_2 = (signed char)-71;
signed char var_3 = (signed char)103;
unsigned long long int var_4 = 3158586717076333042ULL;
signed char var_7 = (signed char)-109;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 3394002054U;
short var_11 = (short)-29723;
unsigned long long int var_12 = 16715329505275271115ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
