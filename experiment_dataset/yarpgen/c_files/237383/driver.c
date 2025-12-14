#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
long long int var_4 = 1701291895592757843LL;
unsigned char var_5 = (unsigned char)81;
signed char var_6 = (signed char)42;
unsigned char var_8 = (unsigned char)180;
long long int var_9 = 1018050093600213852LL;
int zero = 0;
signed char var_10 = (signed char)-50;
signed char var_11 = (signed char)-5;
long long int var_12 = 6212101102835798002LL;
long long int var_13 = 4869824244659179656LL;
signed char var_14 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
