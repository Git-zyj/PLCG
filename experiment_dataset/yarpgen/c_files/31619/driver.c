#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -205957794;
unsigned int var_5 = 3285884603U;
long long int var_6 = -1186799838348834901LL;
int var_8 = -279089911;
long long int var_10 = -2337969254942154945LL;
int zero = 0;
long long int var_11 = -1264275346569326412LL;
unsigned long long int var_12 = 1962247936217553842ULL;
long long int var_13 = 5506055044074838223LL;
int var_14 = 2137759105;
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
