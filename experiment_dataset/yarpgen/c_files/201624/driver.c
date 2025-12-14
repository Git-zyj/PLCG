#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4740710958929859331LL;
long long int var_8 = -2861845825321586766LL;
unsigned char var_10 = (unsigned char)125;
long long int var_11 = 1879426371679148279LL;
int zero = 0;
unsigned long long int var_13 = 11836214936932794033ULL;
short var_14 = (short)10682;
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
