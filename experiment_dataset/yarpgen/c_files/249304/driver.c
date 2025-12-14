#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 792628321006318591LL;
long long int var_2 = -6691304423458456265LL;
unsigned char var_5 = (unsigned char)254;
_Bool var_6 = (_Bool)1;
long long int var_7 = -4075036358159448666LL;
unsigned long long int var_9 = 12570238951479108903ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)234;
unsigned long long int var_12 = 14937621343021382315ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
