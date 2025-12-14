#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -86808903;
unsigned short var_2 = (unsigned short)5286;
unsigned long long int var_3 = 8628434959428868755ULL;
unsigned long long int var_5 = 2703206582515761775ULL;
unsigned long long int var_6 = 4447076797084410972ULL;
unsigned int var_8 = 4094221383U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)36076;
long long int var_15 = -85038011555249588LL;
int zero = 0;
unsigned short var_17 = (unsigned short)17156;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)216;
void init() {
}

void checksum() {
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
