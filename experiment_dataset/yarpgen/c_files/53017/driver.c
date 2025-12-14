#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4324073055466420721LL;
unsigned int var_2 = 323420579U;
long long int var_6 = 6365242362562271861LL;
unsigned short var_7 = (unsigned short)24031;
signed char var_9 = (signed char)-66;
unsigned char var_10 = (unsigned char)193;
int zero = 0;
unsigned int var_13 = 1297779405U;
long long int var_14 = 3309583887815538352LL;
int var_15 = 1823034635;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
