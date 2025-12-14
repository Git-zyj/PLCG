#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1106556317U;
unsigned int var_1 = 4159375675U;
unsigned int var_3 = 1028560432U;
unsigned int var_4 = 4166584377U;
unsigned int var_5 = 2864632792U;
unsigned int var_6 = 1088114123U;
unsigned int var_9 = 2946435263U;
int zero = 0;
unsigned int var_10 = 2984765718U;
unsigned int var_11 = 4065833269U;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
