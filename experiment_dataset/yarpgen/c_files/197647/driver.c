#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4177832107U;
long long int var_2 = 4941384765460328430LL;
long long int var_4 = -5489610822407108967LL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)74;
int zero = 0;
unsigned short var_10 = (unsigned short)51473;
unsigned int var_11 = 3459576245U;
int var_12 = -380040115;
unsigned int var_13 = 454673861U;
unsigned long long int var_14 = 14582828991480480783ULL;
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
