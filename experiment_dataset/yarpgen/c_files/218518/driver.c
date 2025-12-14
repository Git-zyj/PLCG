#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 228546454;
int var_2 = 1062665840;
unsigned char var_3 = (unsigned char)244;
int var_4 = -1632030976;
short var_5 = (short)-28560;
int var_7 = 911283862;
unsigned short var_10 = (unsigned short)50403;
unsigned short var_11 = (unsigned short)51373;
short var_12 = (short)1996;
unsigned char var_13 = (unsigned char)208;
long long int var_14 = 2069736403415279736LL;
int zero = 0;
int var_15 = -1800392465;
unsigned int var_16 = 3444441362U;
unsigned short var_17 = (unsigned short)43810;
unsigned char var_18 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
