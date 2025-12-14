#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)195;
long long int var_4 = 1700459765086906112LL;
unsigned long long int var_6 = 5273000777989130666ULL;
unsigned long long int var_8 = 11674498562421579673ULL;
long long int var_16 = 222781571523858865LL;
int zero = 0;
unsigned long long int var_17 = 16614805037434487350ULL;
unsigned char var_18 = (unsigned char)157;
int var_19 = -1595045121;
short var_20 = (short)3039;
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
