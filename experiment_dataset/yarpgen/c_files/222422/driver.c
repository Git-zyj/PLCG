#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned int var_6 = 2634814306U;
unsigned long long int var_7 = 17676505079320878904ULL;
unsigned char var_13 = (unsigned char)154;
int zero = 0;
unsigned long long int var_14 = 14314276962225480479ULL;
int var_15 = 1733730104;
short var_16 = (short)1927;
short var_17 = (short)3812;
short arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)7338;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
