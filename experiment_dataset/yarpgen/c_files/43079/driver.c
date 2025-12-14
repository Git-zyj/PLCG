#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2079893918447545672LL;
signed char var_3 = (signed char)-119;
long long int var_6 = -8757788908367733483LL;
unsigned int var_7 = 1232757711U;
signed char var_8 = (signed char)123;
unsigned int var_9 = 1478958797U;
unsigned int var_10 = 2776047281U;
unsigned short var_12 = (unsigned short)52431;
int zero = 0;
signed char var_14 = (signed char)-43;
unsigned short var_15 = (unsigned short)32593;
unsigned int var_16 = 2662325408U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
