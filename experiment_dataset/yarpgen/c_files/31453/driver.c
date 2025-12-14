#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
signed char var_1 = (signed char)-88;
int var_3 = -1737307387;
unsigned int var_5 = 2324051467U;
unsigned char var_6 = (unsigned char)112;
_Bool var_7 = (_Bool)1;
long long int var_8 = -5005441863971765037LL;
long long int var_9 = -1493180944483802018LL;
int zero = 0;
short var_10 = (short)7997;
unsigned short var_11 = (unsigned short)6251;
int var_12 = 104668989;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
