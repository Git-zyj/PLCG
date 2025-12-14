#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
long long int var_2 = -2638409354148977664LL;
short var_4 = (short)4506;
unsigned short var_8 = (unsigned short)26737;
long long int var_10 = -2507497877971295999LL;
unsigned short var_13 = (unsigned short)53982;
int var_14 = -1652711216;
signed char var_17 = (signed char)25;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2222242912U;
long long int var_21 = 5153145457206671199LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
