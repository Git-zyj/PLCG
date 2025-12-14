#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-16;
_Bool var_5 = (_Bool)0;
short var_6 = (short)5348;
long long int var_9 = 3517345406337404771LL;
int zero = 0;
unsigned short var_10 = (unsigned short)39402;
long long int var_11 = 5227230037856567017LL;
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
