#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13289629931674475190ULL;
unsigned long long int var_2 = 7592422384811719777ULL;
int var_3 = 539932453;
_Bool var_4 = (_Bool)1;
int var_5 = 467329929;
int var_6 = -1942607461;
unsigned short var_9 = (unsigned short)63079;
long long int var_11 = -982978407258972906LL;
short var_12 = (short)-31189;
int zero = 0;
int var_16 = 1605024983;
unsigned short var_17 = (unsigned short)65420;
unsigned long long int var_18 = 622276546944373642ULL;
unsigned char var_19 = (unsigned char)105;
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
