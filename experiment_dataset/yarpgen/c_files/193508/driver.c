#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7719975904855190113LL;
unsigned short var_7 = (unsigned short)52731;
signed char var_9 = (signed char)-115;
int zero = 0;
unsigned long long int var_11 = 11371908886718576315ULL;
unsigned long long int var_12 = 11933012176751761373ULL;
unsigned int var_13 = 3263510919U;
long long int var_14 = 6871062248663203521LL;
void init() {
}

void checksum() {
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
