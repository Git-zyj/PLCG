#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7601184911389204218LL;
unsigned char var_1 = (unsigned char)111;
int var_2 = -2144503491;
unsigned long long int var_3 = 7600176564020119140ULL;
unsigned int var_4 = 1826586821U;
int var_5 = 850753248;
long long int var_6 = 1503807598707210053LL;
unsigned long long int var_7 = 16457233557686278668ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 5457058174202061265LL;
short var_10 = (short)-5998;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 14879258862029427259ULL;
long long int var_13 = 8633347478812603429LL;
long long int var_14 = 3203408697930688106LL;
unsigned int var_15 = 1026302213U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
