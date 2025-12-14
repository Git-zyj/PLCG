#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34527;
long long int var_2 = -4344107198740948157LL;
short var_4 = (short)21752;
unsigned char var_6 = (unsigned char)220;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 8548041827483424242ULL;
short var_16 = (short)7729;
int zero = 0;
unsigned long long int var_18 = 12659846645230301785ULL;
int var_19 = 482869127;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 2294663964618250742ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
