#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
long long int var_3 = -9021433185733579470LL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)26537;
unsigned long long int var_9 = 3615614523256994124ULL;
signed char var_10 = (signed char)-69;
int zero = 0;
unsigned long long int var_11 = 9724195379993716010ULL;
long long int var_12 = 2747072372676264795LL;
long long int var_13 = 7068049089626656097LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
