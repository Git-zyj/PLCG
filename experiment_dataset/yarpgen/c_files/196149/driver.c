#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)6146;
long long int var_6 = -2748083312516104565LL;
signed char var_7 = (signed char)64;
_Bool var_13 = (_Bool)0;
long long int var_14 = 8820011879962110669LL;
int zero = 0;
short var_17 = (short)26737;
unsigned char var_18 = (unsigned char)206;
short var_19 = (short)32095;
unsigned char var_20 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
