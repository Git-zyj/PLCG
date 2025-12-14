#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15185553413116045885ULL;
unsigned char var_10 = (unsigned char)184;
_Bool var_11 = (_Bool)0;
short var_14 = (short)4615;
long long int var_17 = -4007496100499162748LL;
int zero = 0;
unsigned long long int var_18 = 17224037175022902460ULL;
unsigned char var_19 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
