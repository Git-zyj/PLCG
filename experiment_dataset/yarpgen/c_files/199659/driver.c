#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)92;
long long int var_2 = -2541747260087406655LL;
signed char var_7 = (signed char)65;
int var_8 = -1447768742;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -1644766197;
long long int var_14 = 6461394916678611583LL;
unsigned int var_15 = 1177880130U;
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
