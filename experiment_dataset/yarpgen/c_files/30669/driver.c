#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 986916243040500630LL;
unsigned char var_1 = (unsigned char)175;
signed char var_4 = (signed char)-58;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 18110881611314455937ULL;
int var_10 = 1483166929;
unsigned char var_13 = (unsigned char)11;
long long int var_14 = 2178729444255772819LL;
short var_15 = (short)-12398;
int zero = 0;
signed char var_16 = (signed char)-60;
unsigned int var_17 = 407452901U;
unsigned int var_18 = 1347058880U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
