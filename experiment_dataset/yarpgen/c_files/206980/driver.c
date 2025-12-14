#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7384633703931011725LL;
int var_5 = -625018779;
unsigned int var_7 = 652175570U;
signed char var_9 = (signed char)-103;
int zero = 0;
long long int var_15 = 1454648549721685875LL;
signed char var_16 = (signed char)25;
unsigned long long int var_17 = 5688109886195532477ULL;
unsigned short var_18 = (unsigned short)57858;
signed char var_19 = (signed char)8;
long long int arr_0 [12] ;
unsigned char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2663963299964246862LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)3;
}

void checksum() {
    hash(&seed, var_15);
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
