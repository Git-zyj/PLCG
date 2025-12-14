#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60493;
long long int var_2 = -8002729966748178580LL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)7872;
unsigned short var_11 = (unsigned short)41827;
int zero = 0;
unsigned char var_13 = (unsigned char)100;
_Bool var_14 = (_Bool)0;
long long int var_15 = -4365832818988041339LL;
unsigned long long int var_16 = 12335534504880015450ULL;
void init() {
}

void checksum() {
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
