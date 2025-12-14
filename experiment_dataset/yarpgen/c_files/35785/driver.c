#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 327667999573048023LL;
long long int var_2 = 811883167511377979LL;
signed char var_4 = (signed char)-41;
signed char var_5 = (signed char)110;
long long int var_6 = -7850971610485240429LL;
signed char var_7 = (signed char)83;
signed char var_9 = (signed char)118;
signed char var_11 = (signed char)75;
long long int var_12 = 6014392256541185171LL;
signed char var_13 = (signed char)-60;
int zero = 0;
signed char var_14 = (signed char)102;
int var_15 = -730222097;
int var_16 = 1858275174;
int var_17 = -1000507943;
int var_18 = 1268283014;
signed char var_19 = (signed char)124;
signed char var_20 = (signed char)94;
signed char var_21 = (signed char)-14;
int var_22 = 541783851;
long long int var_23 = -1710033127671935098LL;
signed char var_24 = (signed char)4;
int var_25 = 1501581808;
signed char var_26 = (signed char)-107;
long long int var_27 = -6303505346295228376LL;
long long int var_28 = -6106942385601706066LL;
int var_29 = 1866667885;
signed char var_30 = (signed char)49;
long long int var_31 = -2178033614872320213LL;
long long int var_32 = 5080250063779301148LL;
signed char var_33 = (signed char)-113;
void init() {
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
