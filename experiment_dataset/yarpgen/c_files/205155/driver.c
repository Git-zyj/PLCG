#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 13811679094828701460ULL;
unsigned short var_10 = (unsigned short)2186;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 2123630986U;
long long int var_13 = 8977395233049282468LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
