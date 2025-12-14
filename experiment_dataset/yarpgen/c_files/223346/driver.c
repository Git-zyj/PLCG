#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)111;
signed char var_4 = (signed char)75;
unsigned short var_5 = (unsigned short)28462;
short var_6 = (short)25441;
signed char var_9 = (signed char)96;
int zero = 0;
signed char var_10 = (signed char)-118;
long long int var_11 = 8757605864540166922LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
