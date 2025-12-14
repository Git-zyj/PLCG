#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -551205509;
int var_4 = -1906895572;
unsigned short var_6 = (unsigned short)30572;
unsigned short var_7 = (unsigned short)33757;
int var_9 = 839440009;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 779625737;
int var_16 = 984498706;
_Bool var_17 = (_Bool)0;
int var_18 = -788132351;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
