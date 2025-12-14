#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)10610;
long long int var_4 = 5340560147931820249LL;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)121;
signed char var_13 = (signed char)-90;
int zero = 0;
signed char var_16 = (signed char)82;
signed char var_17 = (signed char)61;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
