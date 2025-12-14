#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned int var_10 = 3464810828U;
long long int var_11 = 7898402658213022185LL;
short var_12 = (short)3579;
unsigned int var_13 = 2691695126U;
int var_14 = 1755409864;
long long int var_15 = 440683449209159945LL;
unsigned long long int var_16 = 17121024683232750063ULL;
unsigned short var_17 = (unsigned short)62040;
unsigned long long int var_18 = 13406870436717225414ULL;
long long int var_19 = 1917973577118021320LL;
long long int var_20 = 1667294035239721201LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)16;
unsigned char var_23 = (unsigned char)207;
long long int var_24 = -6153760670515299883LL;
short var_25 = (short)23607;
unsigned long long int var_26 = 15784077062361791989ULL;
unsigned long long int var_27 = 7716885726688410703ULL;
unsigned char var_28 = (unsigned char)124;
unsigned char var_29 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
