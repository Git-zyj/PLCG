#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1337080222813256571LL;
unsigned short var_3 = (unsigned short)29899;
unsigned long long int var_5 = 16792138859381409374ULL;
unsigned char var_7 = (unsigned char)95;
unsigned short var_9 = (unsigned short)62485;
unsigned long long int var_11 = 11565990189074624416ULL;
long long int var_14 = 5776227661562536750LL;
long long int var_16 = 8396832944960512450LL;
int zero = 0;
unsigned short var_17 = (unsigned short)10844;
unsigned char var_18 = (unsigned char)119;
unsigned char var_19 = (unsigned char)7;
long long int var_20 = -1792969138510288227LL;
unsigned short var_21 = (unsigned short)24276;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
