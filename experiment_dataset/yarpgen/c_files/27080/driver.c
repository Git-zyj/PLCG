#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
long long int var_1 = 308772628205123014LL;
unsigned char var_2 = (unsigned char)120;
long long int var_3 = -4809993076094812277LL;
long long int var_4 = -8520648647573460194LL;
unsigned long long int var_5 = 14505290641954415641ULL;
int var_6 = -1937167050;
unsigned short var_7 = (unsigned short)13011;
long long int var_8 = -1318562207855026075LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
