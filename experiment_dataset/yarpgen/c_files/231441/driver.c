#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23540;
short var_3 = (short)-26164;
signed char var_6 = (signed char)80;
long long int var_7 = -1687998649394341840LL;
signed char var_8 = (signed char)35;
signed char var_9 = (signed char)-19;
int var_10 = 1541937023;
unsigned long long int var_14 = 1789938090585681672ULL;
unsigned char var_15 = (unsigned char)71;
int zero = 0;
unsigned char var_17 = (unsigned char)221;
unsigned char var_18 = (unsigned char)33;
short var_19 = (short)30088;
long long int var_20 = -5019989550362462250LL;
long long int var_21 = -1301162795407334006LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
