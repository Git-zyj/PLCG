#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23763;
unsigned char var_6 = (unsigned char)20;
int var_9 = -625689008;
short var_11 = (short)-9417;
_Bool var_14 = (_Bool)1;
unsigned long long int var_19 = 6815651127254014462ULL;
int zero = 0;
short var_20 = (short)-27644;
long long int var_21 = 4372850702294780540LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
