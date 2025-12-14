#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7627693045212128555LL;
long long int var_4 = 4561081013177735560LL;
unsigned long long int var_5 = 3574214999116302447ULL;
signed char var_6 = (signed char)41;
int var_7 = -2143652771;
long long int var_9 = -5063591831527257076LL;
int zero = 0;
signed char var_10 = (signed char)21;
long long int var_11 = -4780116936578625597LL;
long long int var_12 = 3972677855280032787LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 6314101487149663548LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
