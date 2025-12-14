#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)188;
unsigned short var_4 = (unsigned short)41592;
int var_5 = 1393522931;
unsigned short var_6 = (unsigned short)19783;
unsigned short var_7 = (unsigned short)20450;
unsigned long long int var_8 = 14913700898558842186ULL;
int var_9 = 298758810;
unsigned char var_11 = (unsigned char)32;
unsigned char var_12 = (unsigned char)189;
unsigned short var_13 = (unsigned short)16166;
int var_14 = -312136882;
int var_16 = 1442830825;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)9125;
unsigned int var_19 = 3267567736U;
unsigned char var_20 = (unsigned char)138;
long long int var_21 = 6228459156043571910LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
