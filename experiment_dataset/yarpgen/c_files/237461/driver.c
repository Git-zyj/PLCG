#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17049956321531778033ULL;
long long int var_1 = 2892888309709820533LL;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)67;
signed char var_6 = (signed char)18;
unsigned long long int var_7 = 7684233527232903778ULL;
unsigned long long int var_8 = 15364057796057310837ULL;
unsigned long long int var_9 = 15738075897864581317ULL;
int zero = 0;
long long int var_11 = 547543144009106090LL;
unsigned short var_12 = (unsigned short)58104;
long long int var_13 = -6268583000735205024LL;
short var_14 = (short)-24957;
signed char var_15 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
