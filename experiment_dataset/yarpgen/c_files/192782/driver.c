#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8689440427234736590ULL;
short var_1 = (short)-4107;
unsigned long long int var_5 = 3451155699746551050ULL;
unsigned short var_7 = (unsigned short)41500;
long long int var_8 = -89326901816291592LL;
short var_11 = (short)-25536;
unsigned short var_12 = (unsigned short)35333;
int var_13 = 954264531;
signed char var_15 = (signed char)-20;
unsigned int var_17 = 1185036939U;
int zero = 0;
int var_18 = -1419168259;
unsigned short var_19 = (unsigned short)60164;
int var_20 = 1504545383;
signed char var_21 = (signed char)75;
void init() {
}

void checksum() {
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
