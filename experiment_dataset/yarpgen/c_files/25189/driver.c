#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15698225499131240718ULL;
int var_6 = 856254214;
unsigned char var_9 = (unsigned char)74;
_Bool var_10 = (_Bool)1;
long long int var_14 = 3265051914269537370LL;
short var_16 = (short)-24383;
int zero = 0;
signed char var_17 = (signed char)-74;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
