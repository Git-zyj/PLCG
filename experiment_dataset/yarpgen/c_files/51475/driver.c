#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1177295324;
unsigned long long int var_7 = 1280156525646993669ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 10294000318591930745ULL;
unsigned long long int var_16 = 7502905262699677644ULL;
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
