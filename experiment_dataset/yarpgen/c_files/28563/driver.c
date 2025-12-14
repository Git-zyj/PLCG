#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19406;
short var_2 = (short)32009;
short var_3 = (short)26588;
unsigned long long int var_4 = 10765537829289964385ULL;
unsigned long long int var_5 = 393549852910949742ULL;
int var_6 = 1827195175;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 3101642592543630370ULL;
unsigned long long int var_9 = 16242828457112483810ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-103;
short var_12 = (short)11108;
long long int var_13 = -1282533364942766058LL;
long long int var_14 = -5478009822461518863LL;
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
