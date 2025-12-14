#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3256332061445048719LL;
long long int var_4 = -2600014478098329917LL;
unsigned short var_6 = (unsigned short)1951;
int var_7 = 526988115;
unsigned short var_8 = (unsigned short)10208;
long long int var_9 = 8593202508451564367LL;
unsigned char var_10 = (unsigned char)153;
unsigned long long int var_11 = 14527799650072392659ULL;
int var_12 = -342165745;
unsigned short var_13 = (unsigned short)25750;
unsigned short var_14 = (unsigned short)9603;
int zero = 0;
signed char var_15 = (signed char)-71;
unsigned char var_16 = (unsigned char)9;
unsigned long long int var_17 = 13255680330994204506ULL;
long long int var_18 = 5231362819705865538LL;
int var_19 = 1584656803;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
