#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
long long int var_1 = 3291821143243129502LL;
unsigned char var_9 = (unsigned char)34;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)82;
int zero = 0;
int var_16 = -1390264698;
unsigned char var_17 = (unsigned char)66;
signed char var_18 = (signed char)92;
void init() {
}

void checksum() {
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
