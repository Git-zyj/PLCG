#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2807925730155013858ULL;
long long int var_2 = 186882860732696680LL;
long long int var_3 = -522338375689240157LL;
long long int var_6 = 5079432853385680070LL;
short var_11 = (short)218;
int zero = 0;
unsigned int var_16 = 1732179528U;
unsigned long long int var_17 = 14048026731728191434ULL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)71;
signed char var_20 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
