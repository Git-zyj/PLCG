#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
long long int var_15 = 5560452545738004172LL;
unsigned char var_17 = (unsigned char)241;
long long int var_18 = 181939646737268456LL;
short var_19 = (short)19817;
int zero = 0;
long long int var_20 = 1665551019032117009LL;
long long int var_21 = 7719642694950083917LL;
long long int var_22 = 3485586935037748797LL;
void init() {
}

void checksum() {
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
