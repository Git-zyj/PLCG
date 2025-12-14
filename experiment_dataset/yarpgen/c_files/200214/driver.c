#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3382935144136648600LL;
long long int var_5 = -1665196818969903235LL;
unsigned char var_8 = (unsigned char)123;
int var_9 = 449717259;
signed char var_13 = (signed char)43;
signed char var_14 = (signed char)70;
unsigned char var_15 = (unsigned char)81;
int var_17 = -1167537729;
signed char var_18 = (signed char)9;
int zero = 0;
signed char var_19 = (signed char)-74;
unsigned int var_20 = 1900611322U;
void init() {
}

void checksum() {
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
