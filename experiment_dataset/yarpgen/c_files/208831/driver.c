#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1327817738U;
short var_4 = (short)29073;
unsigned char var_6 = (unsigned char)138;
unsigned long long int var_8 = 11681929847295559993ULL;
unsigned long long int var_11 = 12145985869815617414ULL;
short var_14 = (short)22703;
int zero = 0;
unsigned short var_15 = (unsigned short)39399;
int var_16 = 1158796666;
unsigned long long int var_17 = 13131893607711214687ULL;
long long int var_18 = -1206616303248412997LL;
_Bool var_19 = (_Bool)0;
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
