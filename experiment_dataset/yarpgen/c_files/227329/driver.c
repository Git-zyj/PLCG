#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)132;
unsigned int var_6 = 3980667858U;
int var_8 = -1848094821;
unsigned long long int var_10 = 13971091150530574123ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 17562266249236212141ULL;
int var_18 = -1536369373;
signed char var_19 = (signed char)63;
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
