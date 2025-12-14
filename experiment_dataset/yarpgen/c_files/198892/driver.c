#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)37;
_Bool var_5 = (_Bool)1;
long long int var_7 = 7530569980506379834LL;
unsigned short var_9 = (unsigned short)10612;
long long int var_13 = -1080730602879331631LL;
unsigned short var_14 = (unsigned short)27393;
int zero = 0;
int var_15 = -1129077411;
signed char var_16 = (signed char)60;
signed char var_17 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
