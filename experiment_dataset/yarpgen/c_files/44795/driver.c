#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2725817958908105570ULL;
signed char var_8 = (signed char)18;
int var_9 = -636975681;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)96;
unsigned char var_20 = (unsigned char)85;
unsigned long long int var_21 = 11901979848586790626ULL;
unsigned short var_22 = (unsigned short)32404;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
