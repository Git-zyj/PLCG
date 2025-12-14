#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6859395812554125185LL;
short var_3 = (short)-6723;
unsigned short var_6 = (unsigned short)39870;
unsigned char var_7 = (unsigned char)5;
signed char var_9 = (signed char)125;
unsigned int var_13 = 2669472803U;
signed char var_15 = (signed char)19;
int zero = 0;
signed char var_17 = (signed char)49;
long long int var_18 = 8897815855130725199LL;
long long int var_19 = -6560105466438382848LL;
long long int var_20 = -6536398328501618179LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
