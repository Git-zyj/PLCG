#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
unsigned long long int var_1 = 16120003097745679231ULL;
long long int var_2 = -7922391036478237518LL;
short var_3 = (short)-14165;
unsigned long long int var_4 = 5646696230473268721ULL;
unsigned long long int var_6 = 8699274807198194031ULL;
long long int var_9 = -316881513355681410LL;
long long int var_11 = 463321402925774907LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)28869;
unsigned short var_15 = (unsigned short)45815;
void init() {
}

void checksum() {
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
