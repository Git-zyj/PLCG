#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13581969480066810243ULL;
unsigned char var_4 = (unsigned char)107;
unsigned long long int var_6 = 10375106374251026013ULL;
long long int var_8 = 7336738412466944252LL;
unsigned short var_10 = (unsigned short)31142;
long long int var_12 = -3163156361453673018LL;
unsigned long long int var_16 = 3025665849974792503ULL;
int var_17 = -1422593110;
long long int var_18 = 6856525417754253182LL;
int zero = 0;
short var_20 = (short)-31071;
unsigned char var_21 = (unsigned char)170;
short var_22 = (short)2201;
long long int var_23 = -1373895977855531149LL;
unsigned short var_24 = (unsigned short)50540;
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
