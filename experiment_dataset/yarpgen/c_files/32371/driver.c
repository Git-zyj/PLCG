#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 535268198785082137ULL;
int var_7 = -1554511353;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)45719;
unsigned long long int var_15 = 11554219988920592074ULL;
unsigned long long int var_16 = 8635439259029374375ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
