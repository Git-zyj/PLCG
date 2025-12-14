#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-79;
unsigned long long int var_3 = 9084267954765584049ULL;
unsigned long long int var_5 = 15755051241562736659ULL;
signed char var_9 = (signed char)-52;
signed char var_10 = (signed char)-99;
unsigned long long int var_12 = 8735617014704423811ULL;
signed char var_14 = (signed char)4;
int zero = 0;
unsigned char var_16 = (unsigned char)219;
signed char var_17 = (signed char)-27;
unsigned long long int var_18 = 16977790512132199213ULL;
signed char var_19 = (signed char)-76;
unsigned long long int var_20 = 6008256449562077180ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
