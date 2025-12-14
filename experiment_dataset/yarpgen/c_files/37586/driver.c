#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 954280492427573032LL;
unsigned int var_3 = 3308211211U;
long long int var_5 = 83113717951856012LL;
signed char var_8 = (signed char)90;
signed char var_9 = (signed char)-62;
unsigned short var_12 = (unsigned short)23223;
short var_17 = (short)8745;
int zero = 0;
unsigned char var_18 = (unsigned char)98;
signed char var_19 = (signed char)-71;
unsigned long long int var_20 = 11514710284857380924ULL;
int var_21 = 1479193972;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
