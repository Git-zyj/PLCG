#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2260691047424226450ULL;
unsigned long long int var_2 = 14331228027327206325ULL;
unsigned long long int var_4 = 15723428883064240228ULL;
unsigned long long int var_6 = 13514781773967504221ULL;
unsigned long long int var_8 = 15269403594683384693ULL;
unsigned long long int var_9 = 3456494735671187432ULL;
unsigned long long int var_10 = 3869373256625976487ULL;
unsigned long long int var_11 = 16643840174086010011ULL;
unsigned long long int var_15 = 15960524752881541946ULL;
unsigned long long int var_16 = 15537083859063241757ULL;
int zero = 0;
unsigned long long int var_17 = 6849027272410619423ULL;
unsigned long long int var_18 = 17708461789909319482ULL;
unsigned long long int var_19 = 15184545457733823336ULL;
unsigned long long int var_20 = 13755436968831999480ULL;
unsigned long long int var_21 = 17262726530164265583ULL;
unsigned long long int var_22 = 91277672938370992ULL;
unsigned long long int var_23 = 8293191753103734351ULL;
unsigned long long int var_24 = 18286844533456588350ULL;
unsigned long long int var_25 = 9403286701898946428ULL;
unsigned long long int var_26 = 15018148785506176962ULL;
unsigned long long int var_27 = 6533461054462047938ULL;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_2 [17] ;
unsigned long long int arr_3 [17] ;
unsigned long long int arr_5 [17] [17] ;
unsigned long long int arr_6 [17] ;
unsigned long long int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 6781364151282875196ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 4258137809227728970ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 16769622329939760884ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 161377832348639815ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 17186949015815136809ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 13908410269780475650ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 6272801536892581117ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
