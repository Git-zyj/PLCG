#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-86;
signed char var_7 = (signed char)-114;
unsigned char var_8 = (unsigned char)46;
unsigned char var_9 = (unsigned char)204;
int zero = 0;
unsigned long long int var_10 = 580374559009763472ULL;
signed char var_11 = (signed char)-94;
unsigned short var_12 = (unsigned short)21315;
unsigned long long int var_13 = 12233511727736615557ULL;
unsigned long long int var_14 = 722034338680983388ULL;
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
