#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1983697615U;
long long int var_1 = 3111926162235709074LL;
unsigned int var_2 = 2496292982U;
unsigned int var_3 = 2059820018U;
unsigned short var_4 = (unsigned short)6975;
unsigned short var_11 = (unsigned short)50003;
int zero = 0;
unsigned int var_12 = 51210141U;
unsigned int var_13 = 670268289U;
long long int var_14 = -1179980705795471697LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
