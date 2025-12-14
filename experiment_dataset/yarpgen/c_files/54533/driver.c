#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)36;
unsigned long long int var_5 = 18424491612330814157ULL;
signed char var_6 = (signed char)-28;
unsigned long long int var_8 = 10814814986204387570ULL;
signed char var_10 = (signed char)87;
int zero = 0;
signed char var_11 = (signed char)81;
unsigned long long int var_12 = 4231525985500845904ULL;
unsigned long long int var_13 = 5334444832962463706ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
