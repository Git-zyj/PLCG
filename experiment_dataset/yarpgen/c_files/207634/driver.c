#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11413484942899207841ULL;
unsigned int var_2 = 2972877847U;
unsigned short var_4 = (unsigned short)11892;
unsigned int var_5 = 2225584948U;
signed char var_11 = (signed char)-112;
unsigned int var_12 = 975017288U;
int zero = 0;
int var_19 = -267918011;
long long int var_20 = 9038464968471823863LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
