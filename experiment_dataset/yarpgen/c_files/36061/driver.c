#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)125;
short var_6 = (short)-16759;
_Bool var_8 = (_Bool)1;
long long int var_9 = 8215703852078274341LL;
short var_11 = (short)-1743;
int zero = 0;
short var_18 = (short)-24631;
unsigned char var_19 = (unsigned char)25;
signed char var_20 = (signed char)57;
void init() {
}

void checksum() {
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
