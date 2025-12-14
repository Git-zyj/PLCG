#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16953007649261236391ULL;
signed char var_6 = (signed char)60;
unsigned long long int var_8 = 12226427312333828739ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3877355428U;
signed char var_11 = (signed char)38;
int zero = 0;
short var_13 = (short)-24447;
int var_14 = -1161498803;
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
