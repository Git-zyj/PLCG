#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -377505893;
long long int var_2 = 4746950118543001686LL;
unsigned char var_3 = (unsigned char)242;
unsigned long long int var_5 = 6907998513908193431ULL;
unsigned long long int var_8 = 16440534318387105380ULL;
unsigned long long int var_11 = 11070162479429430819ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)153;
unsigned short var_13 = (unsigned short)61469;
long long int var_14 = 7393227631331383810LL;
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
