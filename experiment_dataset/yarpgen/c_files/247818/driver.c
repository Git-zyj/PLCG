#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5145535323536639246ULL;
_Bool var_2 = (_Bool)1;
long long int var_4 = -8946508898373796406LL;
unsigned char var_8 = (unsigned char)173;
unsigned char var_14 = (unsigned char)123;
unsigned long long int var_15 = 6485109733675679254ULL;
signed char var_17 = (signed char)-57;
int zero = 0;
int var_18 = -901753994;
_Bool var_19 = (_Bool)0;
int var_20 = 1809088119;
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
