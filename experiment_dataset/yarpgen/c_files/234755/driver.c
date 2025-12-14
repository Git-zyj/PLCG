#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13703;
unsigned long long int var_3 = 14423782411120624441ULL;
unsigned long long int var_11 = 18029693495599134286ULL;
unsigned long long int var_13 = 9068031987967122938ULL;
int zero = 0;
long long int var_15 = 5703171793360317910LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
