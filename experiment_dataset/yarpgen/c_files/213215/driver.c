#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15212;
long long int var_1 = -4031689393303322835LL;
signed char var_2 = (signed char)-11;
unsigned int var_3 = 2763916670U;
unsigned short var_4 = (unsigned short)16388;
int var_5 = -748643874;
unsigned long long int var_6 = 18277491711308707262ULL;
unsigned short var_7 = (unsigned short)63034;
long long int var_8 = -385664061375587594LL;
int zero = 0;
unsigned int var_10 = 1658761700U;
short var_11 = (short)-26036;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)12;
short var_14 = (short)-11500;
signed char var_15 = (signed char)-85;
unsigned char var_16 = (unsigned char)220;
unsigned long long int var_17 = 1088453590172844479ULL;
long long int var_18 = -1862447336524305288LL;
unsigned short var_19 = (unsigned short)48303;
long long int var_20 = -3142494744068577382LL;
signed char var_21 = (signed char)33;
unsigned long long int var_22 = 10496538572753296261ULL;
_Bool var_23 = (_Bool)1;
short var_24 = (short)21482;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
