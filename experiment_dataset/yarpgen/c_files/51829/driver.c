#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2267791083276712599ULL;
unsigned char var_4 = (unsigned char)233;
unsigned char var_6 = (unsigned char)28;
int var_7 = 910296706;
int var_10 = -365620015;
signed char var_14 = (signed char)39;
int zero = 0;
unsigned short var_18 = (unsigned short)22174;
long long int var_19 = 8083809922549933181LL;
unsigned int var_20 = 2503431009U;
int var_21 = -596715708;
long long int var_22 = -958378676533332867LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
