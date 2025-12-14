#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11198668502390229478ULL;
unsigned long long int var_4 = 15908051918544846328ULL;
long long int var_6 = 8959946098735322134LL;
int var_8 = -1234044286;
int zero = 0;
unsigned long long int var_15 = 5822402101245890055ULL;
signed char var_16 = (signed char)5;
unsigned short var_17 = (unsigned short)41757;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
