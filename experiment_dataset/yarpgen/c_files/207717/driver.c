#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)83;
unsigned char var_3 = (unsigned char)178;
unsigned char var_8 = (unsigned char)167;
unsigned char var_9 = (unsigned char)117;
signed char var_11 = (signed char)-114;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8155120455345177855LL;
int var_20 = -657035902;
void init() {
}

void checksum() {
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
