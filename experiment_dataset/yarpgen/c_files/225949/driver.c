#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8314256787267857060LL;
unsigned char var_2 = (unsigned char)226;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)25536;
unsigned short var_8 = (unsigned short)18341;
long long int var_10 = -8900233475786127446LL;
long long int var_12 = -6410393349580040022LL;
int var_13 = 740391496;
int zero = 0;
long long int var_15 = 6372897448626035733LL;
unsigned short var_16 = (unsigned short)42788;
short var_17 = (short)22468;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
