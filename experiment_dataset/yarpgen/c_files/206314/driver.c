#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4928601079767990603LL;
unsigned char var_4 = (unsigned char)43;
int var_8 = 1105018535;
int var_9 = 503969439;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-37;
long long int var_16 = 6219488678110620898LL;
_Bool var_17 = (_Bool)1;
long long int var_18 = -7735031266374588804LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
