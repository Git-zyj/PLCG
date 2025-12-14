#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 556803800;
unsigned char var_5 = (unsigned char)127;
unsigned int var_7 = 2033524403U;
unsigned long long int var_9 = 14227740736255612444ULL;
_Bool var_11 = (_Bool)1;
long long int var_14 = 8773708511017554422LL;
int zero = 0;
unsigned int var_15 = 1698914873U;
int var_16 = -659228489;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2910361803U;
unsigned short var_19 = (unsigned short)26226;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
