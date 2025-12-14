#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16294087543994853872ULL;
long long int var_5 = 6510354459395877344LL;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-12390;
long long int var_12 = -5817738143336583800LL;
long long int var_13 = -284027296672565679LL;
int zero = 0;
unsigned char var_16 = (unsigned char)111;
unsigned long long int var_17 = 1115785164470683319ULL;
void init() {
}

void checksum() {
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
