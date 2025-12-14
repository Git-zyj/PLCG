#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16585695246522534356ULL;
unsigned long long int var_1 = 9503138245392776786ULL;
unsigned char var_4 = (unsigned char)223;
long long int var_5 = -434210151536604056LL;
unsigned char var_6 = (unsigned char)250;
unsigned char var_7 = (unsigned char)118;
_Bool var_8 = (_Bool)0;
int var_9 = -2043190988;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 9562064773265504282ULL;
long long int var_12 = 2006565025788214648LL;
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
