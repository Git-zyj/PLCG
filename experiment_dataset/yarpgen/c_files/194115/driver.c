#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)162;
short var_9 = (short)19984;
unsigned short var_11 = (unsigned short)18599;
short var_14 = (short)-2647;
int zero = 0;
long long int var_16 = 4921098025863223328LL;
unsigned int var_17 = 1192101195U;
short var_18 = (short)-29426;
short var_19 = (short)15954;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
