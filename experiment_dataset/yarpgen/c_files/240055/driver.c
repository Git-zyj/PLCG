#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
_Bool var_1 = (_Bool)0;
int var_4 = -864619441;
unsigned short var_5 = (unsigned short)5796;
long long int var_11 = -5541354391479336638LL;
unsigned char var_13 = (unsigned char)90;
int zero = 0;
unsigned char var_18 = (unsigned char)65;
unsigned short var_19 = (unsigned short)11408;
unsigned long long int var_20 = 8971174144137631300ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
