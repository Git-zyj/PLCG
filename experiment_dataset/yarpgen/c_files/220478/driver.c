#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11572056270352068189ULL;
long long int var_1 = 734938298321579854LL;
unsigned long long int var_2 = 6466316608855722497ULL;
unsigned char var_4 = (unsigned char)170;
unsigned long long int var_8 = 14292873852700570122ULL;
long long int var_9 = -4167223008636618809LL;
unsigned long long int var_11 = 11751424350522123731ULL;
long long int var_13 = -5849744370415329122LL;
int zero = 0;
unsigned char var_17 = (unsigned char)232;
unsigned long long int var_18 = 8336130477256553012ULL;
unsigned long long int var_19 = 18058622857846091460ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
