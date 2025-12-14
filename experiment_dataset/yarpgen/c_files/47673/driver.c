#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
unsigned short var_2 = (unsigned short)47464;
signed char var_6 = (signed char)-26;
unsigned char var_7 = (unsigned char)94;
unsigned short var_8 = (unsigned short)31655;
long long int var_9 = 1796356755802751565LL;
int var_11 = -549460065;
int var_12 = 261556610;
int zero = 0;
short var_14 = (short)15361;
int var_15 = 128517879;
short var_16 = (short)29763;
signed char var_17 = (signed char)-82;
unsigned char var_18 = (unsigned char)26;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
