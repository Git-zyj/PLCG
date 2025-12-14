#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4589090146999833691LL;
long long int var_2 = -773372691768882227LL;
unsigned short var_3 = (unsigned short)54154;
int var_4 = -253269302;
long long int var_6 = 8625885163982166968LL;
unsigned int var_7 = 2590015158U;
_Bool var_8 = (_Bool)0;
long long int var_12 = 7514338853591273972LL;
int var_13 = 140010384;
int zero = 0;
int var_14 = -1824846389;
short var_15 = (short)1800;
short var_16 = (short)52;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
