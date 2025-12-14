#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
int var_3 = 865863032;
short var_4 = (short)-7482;
unsigned char var_5 = (unsigned char)183;
signed char var_9 = (signed char)-69;
unsigned short var_10 = (unsigned short)5530;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -689555989792960664LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-30;
unsigned long long int var_15 = 11292397812596923972ULL;
int var_16 = -1340514688;
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
