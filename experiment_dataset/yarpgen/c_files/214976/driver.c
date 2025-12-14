#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-66;
long long int var_5 = -7339849324403310817LL;
int var_6 = 1861771638;
unsigned long long int var_10 = 2051921332306550814ULL;
unsigned long long int var_12 = 15384193674695537538ULL;
int var_14 = 1773095918;
unsigned short var_16 = (unsigned short)37174;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-6;
unsigned char var_22 = (unsigned char)254;
long long int var_23 = 3023324713835517585LL;
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
