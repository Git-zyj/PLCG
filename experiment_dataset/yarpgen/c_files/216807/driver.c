#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8714987358667921852LL;
signed char var_6 = (signed char)105;
long long int var_7 = 3298634910423761640LL;
unsigned char var_13 = (unsigned char)89;
int zero = 0;
unsigned char var_20 = (unsigned char)79;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
