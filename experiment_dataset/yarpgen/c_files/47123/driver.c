#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)92;
unsigned int var_4 = 2714125548U;
unsigned int var_5 = 4166792262U;
unsigned char var_7 = (unsigned char)164;
unsigned char var_8 = (unsigned char)206;
unsigned long long int var_9 = 10592609368163223941ULL;
long long int var_10 = 9169404194677747769LL;
signed char var_13 = (signed char)-104;
int var_17 = -1675036252;
unsigned int var_18 = 3536945978U;
signed char var_19 = (signed char)42;
int zero = 0;
unsigned long long int var_20 = 6069658191282253621ULL;
signed char var_21 = (signed char)-86;
signed char var_22 = (signed char)100;
unsigned char var_23 = (unsigned char)217;
signed char var_24 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
