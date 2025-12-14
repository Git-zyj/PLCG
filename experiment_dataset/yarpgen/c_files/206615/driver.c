#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2833442110251489531LL;
unsigned short var_1 = (unsigned short)39581;
unsigned short var_5 = (unsigned short)1770;
unsigned short var_6 = (unsigned short)27427;
unsigned char var_8 = (unsigned char)169;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)22;
int zero = 0;
signed char var_14 = (signed char)-45;
_Bool var_15 = (_Bool)0;
long long int var_16 = -113338615481835945LL;
unsigned short var_17 = (unsigned short)23577;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
