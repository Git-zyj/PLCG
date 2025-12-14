#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2547709898194776114LL;
unsigned long long int var_4 = 15156692282295697497ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)110;
unsigned short var_9 = (unsigned short)9538;
int zero = 0;
int var_10 = -260454583;
short var_11 = (short)29473;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
