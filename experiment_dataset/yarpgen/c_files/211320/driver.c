#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5022187567206718042LL;
int zero = 0;
unsigned long long int var_19 = 12893520403317338282ULL;
unsigned short var_20 = (unsigned short)34248;
unsigned long long int var_21 = 6303935419052964286ULL;
signed char var_22 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
