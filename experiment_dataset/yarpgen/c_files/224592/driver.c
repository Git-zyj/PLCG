#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
unsigned int var_1 = 4074841969U;
unsigned char var_2 = (unsigned char)38;
unsigned int var_3 = 1913901281U;
unsigned short var_4 = (unsigned short)26586;
signed char var_5 = (signed char)30;
unsigned short var_6 = (unsigned short)18202;
long long int var_7 = 962853355283873877LL;
unsigned char var_8 = (unsigned char)141;
unsigned long long int var_10 = 5246119740586772462ULL;
long long int var_11 = -4686654415015473603LL;
long long int var_12 = -7967448298268905148LL;
unsigned char var_13 = (unsigned char)55;
long long int var_15 = 80421913061912518LL;
unsigned long long int var_16 = 1960204814350518665ULL;
unsigned long long int var_17 = 8643872791390978114ULL;
int zero = 0;
long long int var_18 = -4925085002213911438LL;
short var_19 = (short)10554;
long long int var_20 = -7138963144487749653LL;
signed char var_21 = (signed char)46;
short var_22 = (short)-668;
unsigned short var_23 = (unsigned short)55355;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
