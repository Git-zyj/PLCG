#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -350349662;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int var_8 = -1044465825;
unsigned long long int var_11 = 15380193235716924693ULL;
long long int var_13 = 7067234176425995473LL;
int var_14 = 1609602316;
short var_18 = (short)32595;
short var_19 = (short)11410;
int zero = 0;
unsigned long long int var_20 = 5885702200574211857ULL;
unsigned long long int var_21 = 4383356714354488425ULL;
signed char var_22 = (signed char)100;
int var_23 = -1414075862;
short var_24 = (short)-28138;
void init() {
}

void checksum() {
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
