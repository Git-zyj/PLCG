#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 8184037366985837601LL;
long long int var_4 = -1161041618180736274LL;
unsigned short var_7 = (unsigned short)51899;
_Bool var_8 = (_Bool)0;
int var_9 = -608861479;
long long int var_12 = 3151610459819868298LL;
long long int var_13 = -1042954532112119330LL;
int zero = 0;
int var_14 = -323788652;
unsigned short var_15 = (unsigned short)29490;
int var_16 = -904987355;
unsigned char var_17 = (unsigned char)147;
signed char var_18 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
