#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6005417888630695031LL;
unsigned short var_8 = (unsigned short)64841;
long long int var_9 = -8244047165358558464LL;
unsigned int var_10 = 2907265983U;
long long int var_12 = 4408557914183349126LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_17 = 5783968289204682068LL;
signed char var_18 = (signed char)-57;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
