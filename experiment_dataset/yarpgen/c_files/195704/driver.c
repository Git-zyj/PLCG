#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3100462524551989747LL;
unsigned long long int var_5 = 6730536744490875542ULL;
unsigned char var_6 = (unsigned char)103;
short var_7 = (short)13499;
unsigned char var_8 = (unsigned char)125;
long long int var_9 = 7787404259018042696LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 3552750298759358833LL;
short var_12 = (short)-16967;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
