#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5934269870275808529LL;
short var_3 = (short)-12702;
unsigned char var_4 = (unsigned char)90;
signed char var_5 = (signed char)11;
unsigned char var_6 = (unsigned char)12;
unsigned char var_7 = (unsigned char)217;
int var_10 = 689376862;
long long int var_11 = 4497402384477068673LL;
short var_13 = (short)-4049;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 1122627067647744177LL;
int var_18 = -775492118;
short var_19 = (short)-3990;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
