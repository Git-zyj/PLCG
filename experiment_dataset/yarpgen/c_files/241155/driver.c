#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9480669018989383513ULL;
unsigned long long int var_4 = 8935678971105133700ULL;
signed char var_5 = (signed char)20;
short var_6 = (short)-13062;
unsigned long long int var_7 = 10219794368790718169ULL;
signed char var_8 = (signed char)-15;
long long int var_9 = -2027169618413066611LL;
int zero = 0;
unsigned short var_11 = (unsigned short)64123;
unsigned char var_12 = (unsigned char)85;
int var_13 = 1777440229;
int var_14 = -2034093956;
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
