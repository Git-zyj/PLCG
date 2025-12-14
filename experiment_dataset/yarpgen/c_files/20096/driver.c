#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
int var_3 = 472833549;
unsigned char var_4 = (unsigned char)194;
unsigned short var_7 = (unsigned short)53640;
short var_8 = (short)4390;
long long int var_11 = -7195553911295923261LL;
unsigned char var_12 = (unsigned char)161;
long long int var_13 = 561902297097822693LL;
int zero = 0;
short var_15 = (short)-4625;
long long int var_16 = 4904762252535007666LL;
long long int var_17 = -275268255629344040LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
