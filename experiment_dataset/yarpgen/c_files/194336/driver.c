#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 831231235;
unsigned long long int var_5 = 14230109657414696563ULL;
unsigned short var_7 = (unsigned short)9701;
short var_8 = (short)14194;
int zero = 0;
short var_10 = (short)-27301;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-18371;
unsigned long long int var_13 = 9777797106809355330ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
