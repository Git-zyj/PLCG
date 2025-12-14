#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16548;
long long int var_2 = 2910940129050646042LL;
unsigned long long int var_4 = 1926289142377390907ULL;
long long int var_5 = 1246786680212798111LL;
signed char var_10 = (signed char)4;
unsigned char var_12 = (unsigned char)155;
unsigned char var_18 = (unsigned char)194;
int zero = 0;
unsigned short var_19 = (unsigned short)49992;
long long int var_20 = 802718779305096811LL;
unsigned short var_21 = (unsigned short)12141;
signed char var_22 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
