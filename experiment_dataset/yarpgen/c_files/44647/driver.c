#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14560987984284612325ULL;
unsigned char var_3 = (unsigned char)53;
int var_5 = 416929283;
signed char var_6 = (signed char)-6;
unsigned long long int var_8 = 4364778413091099193ULL;
int var_9 = -599322959;
unsigned char var_10 = (unsigned char)56;
long long int var_12 = 7541735384126224474LL;
signed char var_15 = (signed char)-10;
int zero = 0;
unsigned char var_17 = (unsigned char)183;
signed char var_18 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
