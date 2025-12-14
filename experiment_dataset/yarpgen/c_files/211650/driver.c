#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
_Bool var_3 = (_Bool)0;
short var_5 = (short)28662;
long long int var_6 = 6821393121395132038LL;
int var_8 = 245300945;
unsigned short var_9 = (unsigned short)52042;
unsigned char var_11 = (unsigned char)71;
short var_12 = (short)12723;
int zero = 0;
unsigned char var_13 = (unsigned char)102;
long long int var_14 = -4121801531141416292LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
