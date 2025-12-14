#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3307825862U;
unsigned long long int var_2 = 1047830603216438178ULL;
signed char var_3 = (signed char)115;
unsigned long long int var_4 = 10546640151719174368ULL;
int var_7 = -522120080;
long long int var_8 = 5837212450062532032LL;
unsigned int var_9 = 42581449U;
unsigned long long int var_10 = 9007946104820526067ULL;
unsigned int var_11 = 4168138973U;
int var_12 = 660638195;
signed char var_15 = (signed char)118;
unsigned int var_16 = 1069092152U;
int zero = 0;
unsigned int var_17 = 2878762856U;
signed char var_18 = (signed char)40;
unsigned long long int var_19 = 5032861762294232804ULL;
void init() {
}

void checksum() {
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
