#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12384205484344052637ULL;
signed char var_6 = (signed char)81;
unsigned long long int var_7 = 5259432530017001054ULL;
unsigned long long int var_8 = 2302475826902069999ULL;
unsigned long long int var_9 = 12666952276294786871ULL;
unsigned short var_11 = (unsigned short)51324;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)135;
int zero = 0;
unsigned short var_18 = (unsigned short)58480;
int var_19 = 735334174;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
