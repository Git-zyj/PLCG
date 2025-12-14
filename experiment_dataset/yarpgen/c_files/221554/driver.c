#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5726690818777306088LL;
long long int var_2 = -7765500217371679971LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3719354537U;
unsigned int var_5 = 2274520419U;
unsigned short var_6 = (unsigned short)37487;
short var_8 = (short)26751;
unsigned int var_9 = 583533339U;
int zero = 0;
unsigned int var_10 = 2879306882U;
unsigned long long int var_11 = 16946630714403149838ULL;
signed char var_12 = (signed char)-94;
unsigned long long int var_13 = 12341742345532737029ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
