#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1338394302U;
long long int var_1 = -8593420689357753217LL;
signed char var_2 = (signed char)27;
signed char var_4 = (signed char)-74;
unsigned long long int var_7 = 9940919363095912617ULL;
unsigned int var_8 = 2594053858U;
unsigned long long int var_11 = 3486965124170458371ULL;
signed char var_13 = (signed char)63;
signed char var_14 = (signed char)-120;
unsigned long long int var_16 = 3369508517625109354ULL;
int zero = 0;
unsigned long long int var_17 = 432951295744445862ULL;
long long int var_18 = 5950887142019027073LL;
unsigned long long int var_19 = 16129501782912224821ULL;
signed char var_20 = (signed char)-88;
unsigned long long int var_21 = 17219443245588624001ULL;
unsigned int var_22 = 3157277391U;
signed char var_23 = (signed char)79;
signed char var_24 = (signed char)5;
signed char var_25 = (signed char)-63;
long long int var_26 = 8677167448106539527LL;
long long int var_27 = -2277636895843664805LL;
long long int var_28 = 5843782978737002533LL;
long long int var_29 = 2211618180053171038LL;
unsigned long long int var_30 = 7734745228939136867ULL;
unsigned long long int var_31 = 7672009830882831613ULL;
unsigned long long int var_32 = 10973221811690136603ULL;
long long int var_33 = 3223092745264991078LL;
signed char var_34 = (signed char)-72;
signed char var_35 = (signed char)35;
unsigned long long int var_36 = 4150943209476559138ULL;
unsigned long long int var_37 = 15672981088078950095ULL;
unsigned long long int var_38 = 16106715105573285458ULL;
signed char var_39 = (signed char)91;
unsigned int var_40 = 3151257919U;
signed char var_41 = (signed char)-46;
unsigned long long int var_42 = 15459461274594742691ULL;
unsigned int var_43 = 4011896800U;
unsigned int var_44 = 2112171299U;
long long int var_45 = 5543650653569032100LL;
long long int arr_1 [10] ;
unsigned int arr_2 [10] [10] ;
unsigned int arr_4 [10] ;
long long int arr_5 [10] [10] ;
signed char arr_6 [10] [10] [10] ;
signed char arr_9 [10] [10] [10] [10] ;
unsigned long long int arr_10 [10] [10] [10] [10] ;
unsigned int arr_13 [10] [10] [10] [10] [10] ;
signed char arr_14 [10] [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_16 [10] [10] [10] [10] [10] ;
long long int arr_20 [10] [10] [10] ;
unsigned long long int arr_22 [10] [10] [10] [10] [10] ;
signed char arr_24 [10] ;
unsigned long long int arr_28 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -3724087149461192360LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1380382791U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 607211280U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 990239541625864101LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 318089643018652043ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 3445605574U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? (signed char)40 : (signed char)-85;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 16600265430627881278ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -6328435104090908856LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 11293977663044403222ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (signed char)-94 : (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 15378361899668637073ULL : 7824644880522634943ULL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
