#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 44923224;
short var_3 = (short)-21767;
int var_4 = 972107765;
long long int var_7 = 8394622040806005147LL;
unsigned long long int var_8 = 7127964544830281541ULL;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-13873;
unsigned char var_13 = (unsigned char)21;
short var_16 = (short)28892;
unsigned char var_17 = (unsigned char)90;
short var_19 = (short)5600;
int zero = 0;
int var_20 = 799313927;
int var_21 = -1883618311;
signed char var_22 = (signed char)-61;
_Bool var_23 = (_Bool)0;
long long int var_24 = -3879991798762646281LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
