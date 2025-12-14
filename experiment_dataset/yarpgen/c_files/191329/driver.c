#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6430667084893729865LL;
long long int var_4 = -6754653490686903169LL;
long long int var_5 = -6313464583340167947LL;
unsigned int var_6 = 3711117653U;
unsigned char var_11 = (unsigned char)10;
int zero = 0;
long long int var_12 = 7619333368543937041LL;
short var_13 = (short)-5220;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
