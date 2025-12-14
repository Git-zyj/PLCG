#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9015972231498236867ULL;
unsigned short var_1 = (unsigned short)47598;
long long int var_3 = -576694593122223588LL;
unsigned long long int var_4 = 7366106870547064068ULL;
long long int var_5 = -3135334622554385801LL;
int var_6 = 1323006682;
short var_7 = (short)6898;
short var_8 = (short)32306;
signed char var_10 = (signed char)-122;
int zero = 0;
unsigned int var_12 = 2281640629U;
signed char var_13 = (signed char)-27;
unsigned long long int var_14 = 4493243971128502758ULL;
void init() {
}

void checksum() {
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
