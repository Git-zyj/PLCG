#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)171;
signed char var_7 = (signed char)74;
unsigned int var_9 = 3040778144U;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)18309;
long long int var_12 = 1998564203791776972LL;
int var_13 = 902764523;
int var_14 = 1251446671;
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
