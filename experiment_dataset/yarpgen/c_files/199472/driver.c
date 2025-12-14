#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-88;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-27;
unsigned long long int var_6 = 9915834642930870194ULL;
unsigned long long int var_8 = 1845591222191811022ULL;
unsigned long long int var_11 = 33557694173054520ULL;
short var_14 = (short)27967;
int zero = 0;
signed char var_16 = (signed char)54;
unsigned long long int var_17 = 4422812035116021211ULL;
unsigned char var_18 = (unsigned char)148;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)60212;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
