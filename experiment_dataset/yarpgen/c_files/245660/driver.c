#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)4;
long long int var_5 = 8852589611545863518LL;
short var_7 = (short)-31951;
long long int var_8 = -2089819495519383986LL;
int zero = 0;
signed char var_17 = (signed char)19;
long long int var_18 = -9097850246764571114LL;
signed char var_19 = (signed char)-4;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-54;
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
