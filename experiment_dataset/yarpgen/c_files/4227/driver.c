#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2670564490U;
signed char var_3 = (signed char)-11;
unsigned short var_4 = (unsigned short)19037;
long long int var_5 = -129214695538576515LL;
unsigned long long int var_8 = 10333421408543551863ULL;
unsigned long long int var_11 = 15490619945130623664ULL;
unsigned long long int var_13 = 10873311247629550236ULL;
unsigned short var_14 = (unsigned short)50818;
int zero = 0;
unsigned long long int var_20 = 9629583552278501434ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 13990722943234619163ULL;
void init() {
}

void checksum() {
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
