#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39110;
long long int var_1 = 9171416210852513583LL;
unsigned char var_2 = (unsigned char)6;
long long int var_3 = -7976923483292555403LL;
short var_4 = (short)25881;
unsigned int var_5 = 315871569U;
unsigned int var_7 = 1595975920U;
long long int var_10 = 5601643921942043974LL;
int zero = 0;
short var_15 = (short)-31124;
signed char var_16 = (signed char)-126;
unsigned int var_17 = 3746999602U;
unsigned int var_18 = 1838441626U;
short var_19 = (short)-14416;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
