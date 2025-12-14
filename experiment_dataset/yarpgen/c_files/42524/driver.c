#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28322;
unsigned char var_1 = (unsigned char)230;
unsigned long long int var_9 = 16650108588026910439ULL;
unsigned long long int var_12 = 10263207101736346249ULL;
short var_13 = (short)17269;
short var_14 = (short)1683;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 15295366464677271291ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)28863;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-25630;
unsigned long long int var_22 = 4029226652233949052ULL;
unsigned short var_23 = (unsigned short)64340;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
