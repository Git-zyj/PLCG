#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12847;
unsigned short var_1 = (unsigned short)38884;
signed char var_2 = (signed char)92;
unsigned char var_3 = (unsigned char)42;
long long int var_4 = 2959427137625567494LL;
short var_5 = (short)25128;
int var_8 = -1874737813;
short var_9 = (short)-27427;
unsigned long long int var_10 = 1900196489791874546ULL;
unsigned short var_12 = (unsigned short)59413;
unsigned long long int var_15 = 675806936820129246ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)81;
int zero = 0;
signed char var_18 = (signed char)-27;
unsigned char var_19 = (unsigned char)177;
signed char var_20 = (signed char)-79;
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
