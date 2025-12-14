#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60737;
short var_4 = (short)-24604;
unsigned long long int var_5 = 14424320075847042783ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)31919;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 2184171386960334612ULL;
long long int var_14 = -4610752115610621363LL;
short var_15 = (short)26393;
unsigned short var_17 = (unsigned short)5118;
int zero = 0;
short var_18 = (short)5536;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)3878;
unsigned short var_21 = (unsigned short)33963;
unsigned short var_22 = (unsigned short)6976;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
