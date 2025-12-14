#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1468286241;
long long int var_8 = -8861189201358906343LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = 8231368503816318256LL;
unsigned int var_11 = 3212023716U;
int var_12 = -652399072;
long long int var_14 = -4161795999352240642LL;
unsigned short var_16 = (unsigned short)65074;
unsigned char var_19 = (unsigned char)232;
int zero = 0;
long long int var_20 = 1847972623955106393LL;
unsigned long long int var_21 = 8146776524909118288ULL;
long long int var_22 = -4244592995944639708LL;
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
