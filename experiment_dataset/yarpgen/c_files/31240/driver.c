#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
short var_3 = (short)32521;
_Bool var_5 = (_Bool)1;
int var_6 = -896024771;
int zero = 0;
long long int var_15 = -5949482385993636531LL;
short var_16 = (short)-30066;
short var_17 = (short)-6794;
unsigned long long int var_18 = 5774377620543628952ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
