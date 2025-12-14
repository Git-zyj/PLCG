#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3999315548U;
short var_4 = (short)31630;
unsigned long long int var_5 = 18410870714238204263ULL;
signed char var_6 = (signed char)13;
int var_7 = -1303114990;
long long int var_8 = 4369609159703249472LL;
unsigned long long int var_9 = 8269446740300443509ULL;
unsigned char var_14 = (unsigned char)195;
long long int var_15 = -2857594350166237555LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 569714483;
short var_19 = (short)31591;
unsigned long long int var_20 = 9042789088828010413ULL;
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
