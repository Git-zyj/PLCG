#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16552613363891557716ULL;
unsigned short var_2 = (unsigned short)51768;
long long int var_5 = 8473091002556820026LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)204;
long long int var_8 = -7223151759472410063LL;
int var_10 = -1288991818;
unsigned long long int var_11 = 10251436431781254940ULL;
signed char var_12 = (signed char)-103;
int zero = 0;
unsigned long long int var_13 = 5730058478326464524ULL;
unsigned char var_14 = (unsigned char)44;
int var_15 = 489198648;
short var_16 = (short)-2944;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
