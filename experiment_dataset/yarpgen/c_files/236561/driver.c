#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -653264782395915809LL;
int var_3 = 834918441;
unsigned long long int var_7 = 15843901097589608545ULL;
short var_8 = (short)21121;
unsigned char var_9 = (unsigned char)206;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 427823601U;
int zero = 0;
long long int var_13 = 436925724011768319LL;
unsigned long long int var_14 = 14114716675050066413ULL;
unsigned short var_15 = (unsigned short)64806;
void init() {
}

void checksum() {
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
