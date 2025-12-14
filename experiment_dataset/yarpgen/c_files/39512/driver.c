#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3342219414U;
unsigned int var_2 = 3086470118U;
_Bool var_4 = (_Bool)0;
unsigned int var_9 = 2722875973U;
long long int var_10 = 6687758421412306330LL;
unsigned int var_14 = 2855583659U;
int var_15 = 1930963681;
int zero = 0;
signed char var_17 = (signed char)-126;
unsigned long long int var_18 = 2059923854650663101ULL;
signed char var_19 = (signed char)63;
unsigned char var_20 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
