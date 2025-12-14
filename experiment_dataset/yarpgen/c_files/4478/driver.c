#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1054638670;
long long int var_4 = -5656645287322262605LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -7557052775984896078LL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)147;
signed char var_11 = (signed char)74;
int zero = 0;
short var_17 = (short)-4721;
long long int var_18 = -7328269314304648335LL;
int var_19 = -718756643;
int var_20 = 1913531060;
void init() {
}

void checksum() {
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
