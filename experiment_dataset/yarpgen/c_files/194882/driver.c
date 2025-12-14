#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 627990569;
long long int var_2 = 7482167866296058419LL;
unsigned long long int var_5 = 10021527269857283022ULL;
short var_8 = (short)2940;
signed char var_9 = (signed char)36;
short var_10 = (short)29338;
int zero = 0;
signed char var_12 = (signed char)-15;
unsigned char var_13 = (unsigned char)26;
unsigned long long int var_14 = 17612552738130410605ULL;
unsigned long long int var_15 = 15489009971876930727ULL;
short var_16 = (short)7505;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
