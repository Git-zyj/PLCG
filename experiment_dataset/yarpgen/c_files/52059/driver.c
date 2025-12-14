#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25927;
long long int var_4 = 7018234910389997738LL;
long long int var_6 = 4626692722839711249LL;
int zero = 0;
unsigned long long int var_11 = 11812435306142603960ULL;
signed char var_12 = (signed char)-53;
long long int var_13 = 1240119259324383342LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
