#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37487;
unsigned int var_1 = 184174019U;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)42;
int var_4 = -1436932389;
int var_6 = 762831287;
int var_7 = 885053800;
int var_9 = 1340516011;
unsigned int var_13 = 3618764187U;
unsigned short var_14 = (unsigned short)44177;
unsigned short var_15 = (unsigned short)38000;
int zero = 0;
int var_16 = 1250357086;
unsigned short var_17 = (unsigned short)12636;
signed char var_18 = (signed char)-30;
signed char var_19 = (signed char)85;
void init() {
}

void checksum() {
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
