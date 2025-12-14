#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned int var_1 = 2007842017U;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)45;
unsigned long long int var_5 = 14798699295685606982ULL;
signed char var_7 = (signed char)-89;
unsigned char var_8 = (unsigned char)155;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-49;
unsigned short var_13 = (unsigned short)40177;
unsigned int var_14 = 3744496187U;
int var_15 = -1020728105;
unsigned int var_16 = 2963808432U;
int zero = 0;
unsigned int var_18 = 2908697638U;
int var_19 = -1410320687;
unsigned short var_20 = (unsigned short)31102;
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
