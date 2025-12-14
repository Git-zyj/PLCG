#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22985;
signed char var_1 = (signed char)57;
long long int var_3 = -874973815546234491LL;
long long int var_5 = 2767667287846493531LL;
unsigned long long int var_6 = 1323440666683752053ULL;
unsigned long long int var_8 = 15083125306132257641ULL;
signed char var_12 = (signed char)115;
short var_13 = (short)13573;
signed char var_14 = (signed char)17;
unsigned short var_17 = (unsigned short)27557;
int zero = 0;
short var_20 = (short)1135;
long long int var_21 = 1307482722549178152LL;
int var_22 = 1547560107;
int var_23 = 1832790507;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
