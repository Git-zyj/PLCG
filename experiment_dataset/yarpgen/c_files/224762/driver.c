#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3275479713716406831LL;
unsigned long long int var_1 = 2659534820080749349ULL;
unsigned int var_2 = 2758377857U;
unsigned char var_5 = (unsigned char)86;
signed char var_6 = (signed char)-90;
unsigned char var_7 = (unsigned char)133;
unsigned char var_8 = (unsigned char)181;
unsigned char var_9 = (unsigned char)193;
short var_10 = (short)-4296;
int zero = 0;
long long int var_15 = 3545452866277380976LL;
unsigned int var_16 = 2453229397U;
long long int var_17 = -2780426926086833429LL;
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
