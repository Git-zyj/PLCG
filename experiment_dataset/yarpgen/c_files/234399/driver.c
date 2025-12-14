#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12045846681879646179ULL;
signed char var_6 = (signed char)30;
long long int var_10 = -5570283873845614234LL;
int zero = 0;
long long int var_13 = -6419549776355872281LL;
short var_14 = (short)14130;
signed char var_15 = (signed char)-103;
void init() {
}

void checksum() {
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
