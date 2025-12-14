#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)5547;
int var_4 = -1182383206;
long long int var_6 = -7318226645709287278LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 1585034802889783840ULL;
short var_12 = (short)23247;
unsigned long long int var_13 = 5071930602258720669ULL;
short var_14 = (short)2930;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = -7494634536065696371LL;
unsigned int var_19 = 752727051U;
short var_20 = (short)-16669;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
