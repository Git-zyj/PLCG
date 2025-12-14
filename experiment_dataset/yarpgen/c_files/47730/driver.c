#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31459;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 14651385141114085673ULL;
unsigned char var_3 = (unsigned char)108;
unsigned short var_4 = (unsigned short)7206;
_Bool var_6 = (_Bool)1;
int var_7 = -963407323;
_Bool var_8 = (_Bool)1;
long long int var_9 = -3198683696359869144LL;
int zero = 0;
long long int var_11 = -8019912619098520335LL;
int var_12 = 1929976917;
short var_13 = (short)6864;
unsigned long long int var_14 = 8902745054955535894ULL;
void init() {
}

void checksum() {
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
