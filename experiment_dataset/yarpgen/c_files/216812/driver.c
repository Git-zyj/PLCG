#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3292189520678932200LL;
unsigned short var_2 = (unsigned short)53094;
unsigned short var_4 = (unsigned short)48831;
long long int var_7 = -3793638366107479112LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)25;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)29477;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)18381;
unsigned short var_16 = (unsigned short)24391;
unsigned short var_17 = (unsigned short)10294;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
