#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18708;
long long int var_2 = 8049310899819279593LL;
signed char var_3 = (signed char)-85;
unsigned long long int var_5 = 8412066227675692726ULL;
long long int var_6 = 6881871379159000575LL;
unsigned long long int var_7 = 1845893806473800781ULL;
signed char var_8 = (signed char)-48;
unsigned short var_10 = (unsigned short)39433;
unsigned short var_11 = (unsigned short)33316;
unsigned long long int var_12 = 15004642143341196211ULL;
signed char var_13 = (signed char)23;
signed char var_14 = (signed char)-24;
short var_17 = (short)17356;
int zero = 0;
long long int var_18 = -1281069419466883595LL;
long long int var_19 = 6323064302339987096LL;
unsigned short var_20 = (unsigned short)50682;
signed char var_21 = (signed char)-96;
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
