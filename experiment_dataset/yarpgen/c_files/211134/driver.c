#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-20;
int var_2 = 186857794;
long long int var_5 = -6343249077638891542LL;
long long int var_8 = -321742595796625442LL;
signed char var_10 = (signed char)38;
int zero = 0;
signed char var_12 = (signed char)70;
int var_13 = 1178575735;
void init() {
}

void checksum() {
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
