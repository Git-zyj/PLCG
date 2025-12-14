#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)30877;
unsigned int var_4 = 1952655091U;
unsigned int var_6 = 3168017493U;
unsigned long long int var_7 = 8970777753911310329ULL;
unsigned short var_9 = (unsigned short)45906;
signed char var_12 = (signed char)31;
int zero = 0;
long long int var_19 = -738099623791174773LL;
short var_20 = (short)10937;
signed char var_21 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
