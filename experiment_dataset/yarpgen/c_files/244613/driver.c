#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4215815950215643570LL;
long long int var_7 = 943959280265114142LL;
long long int var_9 = -5247084347826611991LL;
int var_10 = 525775703;
_Bool var_13 = (_Bool)1;
long long int var_14 = -6307550382539553203LL;
long long int var_15 = -3990839888805815948LL;
int zero = 0;
unsigned long long int var_16 = 15591302176397907501ULL;
unsigned short var_17 = (unsigned short)30755;
unsigned int var_18 = 528136978U;
long long int var_19 = -5395416056935168035LL;
void init() {
}

void checksum() {
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
