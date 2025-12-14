#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
int var_7 = -1400015432;
unsigned short var_9 = (unsigned short)39844;
unsigned long long int var_10 = 12301968950990612386ULL;
int zero = 0;
signed char var_13 = (signed char)-32;
long long int var_14 = -3678628639411782752LL;
void init() {
}

void checksum() {
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
