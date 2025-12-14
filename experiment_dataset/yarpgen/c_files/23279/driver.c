#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
short var_3 = (short)22784;
short var_4 = (short)27849;
signed char var_6 = (signed char)-109;
int zero = 0;
unsigned long long int var_10 = 17951361948776772952ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)99;
signed char var_13 = (signed char)-23;
long long int var_14 = 5648315077693559210LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
