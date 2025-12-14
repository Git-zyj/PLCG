#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1722078226U;
unsigned short var_5 = (unsigned short)16879;
unsigned long long int var_10 = 5770134212221979418ULL;
unsigned long long int var_15 = 17853094134418266440ULL;
unsigned long long int var_17 = 15325607118403533818ULL;
int zero = 0;
short var_19 = (short)-26030;
long long int var_20 = 8252216589191620925LL;
unsigned char var_21 = (unsigned char)148;
short var_22 = (short)18898;
_Bool var_23 = (_Bool)0;
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
