#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1227228314180153610LL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)64565;
short var_8 = (short)27452;
signed char var_12 = (signed char)95;
int var_14 = 208477688;
short var_18 = (short)22277;
int zero = 0;
unsigned char var_19 = (unsigned char)129;
int var_20 = 1313931698;
int var_21 = -1535411257;
short var_22 = (short)23559;
int var_23 = -1903426794;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
