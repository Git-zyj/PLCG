#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
short var_1 = (short)25305;
unsigned int var_3 = 3607255861U;
long long int var_4 = 6815406641713583551LL;
unsigned short var_5 = (unsigned short)20178;
long long int var_7 = 3661100049721415808LL;
long long int var_9 = 5508945533604283612LL;
int zero = 0;
unsigned long long int var_10 = 10222249789716787930ULL;
short var_11 = (short)21746;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
