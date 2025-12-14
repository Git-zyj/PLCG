#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4241572538U;
unsigned short var_3 = (unsigned short)43033;
unsigned char var_4 = (unsigned char)157;
unsigned short var_5 = (unsigned short)60938;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)90;
int zero = 0;
long long int var_12 = -3167601064744427642LL;
long long int var_13 = -414751784354965037LL;
void init() {
}

void checksum() {
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
