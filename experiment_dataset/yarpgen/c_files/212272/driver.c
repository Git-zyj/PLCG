#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7159284600084811564LL;
unsigned long long int var_5 = 6708841843399229253ULL;
_Bool var_9 = (_Bool)1;
long long int var_10 = 8460032231895886551LL;
signed char var_15 = (signed char)-27;
int zero = 0;
long long int var_16 = -2974103774580219846LL;
unsigned short var_17 = (unsigned short)27649;
unsigned long long int var_18 = 208781375718021745ULL;
signed char var_19 = (signed char)106;
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
