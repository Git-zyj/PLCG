#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4665691674472593035LL;
unsigned int var_1 = 2082667607U;
unsigned int var_5 = 2395038303U;
unsigned int var_10 = 651227106U;
unsigned int var_11 = 681563523U;
int zero = 0;
int var_12 = 1363101980;
unsigned char var_13 = (unsigned char)81;
unsigned short var_14 = (unsigned short)5381;
short var_15 = (short)20;
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
