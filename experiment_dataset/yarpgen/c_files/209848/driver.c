#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
long long int var_2 = -8124764802960916542LL;
long long int var_3 = -3053417992180982852LL;
long long int var_4 = -4799253136912784595LL;
unsigned int var_10 = 1646705083U;
long long int var_11 = 4936581075778642723LL;
unsigned char var_13 = (unsigned char)153;
signed char var_17 = (signed char)-74;
int zero = 0;
int var_18 = 1185126435;
unsigned int var_19 = 1961661212U;
short var_20 = (short)-18562;
int var_21 = 344584;
void init() {
}

void checksum() {
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
