#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16673702289674767725ULL;
short var_3 = (short)32433;
unsigned long long int var_4 = 13064492854132845827ULL;
unsigned int var_5 = 137035518U;
short var_11 = (short)3856;
unsigned char var_12 = (unsigned char)208;
unsigned int var_13 = 1751337853U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)44071;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
