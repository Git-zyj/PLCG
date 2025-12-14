#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1087807142U;
int var_3 = 1897721489;
signed char var_4 = (signed char)81;
signed char var_5 = (signed char)78;
unsigned long long int var_6 = 4367025796983894768ULL;
int var_7 = -2023880857;
unsigned long long int var_8 = 13377177973721612543ULL;
long long int var_10 = 389063430330929931LL;
int zero = 0;
unsigned long long int var_11 = 10800501624686341833ULL;
unsigned long long int var_12 = 17821576759526291706ULL;
signed char var_13 = (signed char)82;
unsigned long long int var_14 = 6806624355930451514ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
