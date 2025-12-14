#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2407155169286809279LL;
short var_2 = (short)-16627;
long long int var_6 = 1122354553721786506LL;
short var_7 = (short)-1082;
long long int var_9 = 2210435309780656441LL;
int zero = 0;
short var_10 = (short)22322;
long long int var_11 = -4760133614029113957LL;
long long int var_12 = 3972583452188209271LL;
long long int var_13 = 6508715075219637624LL;
unsigned char var_14 = (unsigned char)81;
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
