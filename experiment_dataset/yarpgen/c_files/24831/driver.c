#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4328;
long long int var_1 = -5170558671854046457LL;
short var_2 = (short)-13180;
long long int var_5 = -2693151166410422060LL;
short var_6 = (short)-24942;
int zero = 0;
long long int var_10 = 9009362409315671219LL;
short var_11 = (short)-11589;
long long int var_12 = 8248412607178575278LL;
short var_13 = (short)-32018;
long long int var_14 = 9020457423552128945LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
