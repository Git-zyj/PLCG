#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -988521359;
int var_3 = 134362506;
int var_4 = 1258671014;
int var_5 = 487388804;
int var_6 = -777538588;
int var_7 = 1295530210;
int var_9 = -1510203590;
int var_11 = -773918953;
int var_12 = -1883531246;
int var_13 = -1454604103;
int var_14 = 134268524;
int var_17 = 1252000735;
int var_18 = 610767335;
int var_19 = -504635115;
int zero = 0;
int var_20 = 1797746529;
int var_21 = -905556656;
int var_22 = 1440538549;
int var_23 = -1696118364;
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
