/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234114
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (arr_10 [i_2] [i_4])));
                                arr_13 [i_0] [i_0] = min((2251782633816064LL), ((+(-6163050645007163116LL))));
                                arr_14 [1LL] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_6 [i_0 - 2] [i_1]), (arr_3 [i_0])))) || (((/* implicit */_Bool) arr_10 [i_2] [i_2])))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2251782633816065LL)) ? (9223372036854775807LL) : (6163050645007163135LL)))) ? (max((arr_12 [i_0] [i_0] [i_0] [i_3] [i_0]), (arr_10 [i_3] [i_0 + 2]))) : (max((arr_0 [3LL] [3LL]), (var_10))))));
                            }
                        } 
                    } 
                    arr_15 [i_0 + 1] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2])) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (var_13) : (arr_1 [i_0 - 1] [i_0 - 1]))), (((var_0) + (arr_2 [i_0] [i_0]))))))));
                    var_21 = ((((/* implicit */_Bool) max((arr_4 [i_0 - 2]), ((-9223372036854775807LL - 1LL))))) ? (-6575821521906944050LL) : ((-9223372036854775807LL - 1LL)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        arr_19 [i_5] = arr_16 [i_5];
        var_22 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (arr_17 [i_5]) : (arr_17 [i_5]))))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8931562153791862243LL)) ? (1437560522775918039LL) : ((-9223372036854775807LL - 1LL))))) ? ((~(arr_17 [i_6]))) : (arr_16 [i_5])))));
            var_24 = arr_17 [i_5];
        }
        for (long long int i_7 = 3; i_7 < 19; i_7 += 2) 
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_5])))))) >= (arr_18 [i_7])));
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((var_12) ^ (arr_21 [i_7 - 2])))));
                        var_27 = ((((/* implicit */_Bool) arr_16 [i_9])) ? (arr_28 [i_7 + 1] [i_7 - 1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_21 [i_7 - 3]) >= (-1684347813353731925LL))))));
                        arr_31 [i_5] [i_9] [i_8] [i_9] = arr_18 [i_9];
                        var_28 = arr_20 [i_5];
                        var_29 = ((9223372036854775801LL) - (7877707066669107067LL));
                    }
                } 
            } 
            arr_32 [i_5] [i_7 + 1] [i_5] = ((((((/* implicit */_Bool) 18014398509481983LL)) ? (-3999476891893347508LL) : (-6659890462894825434LL))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -3820560267909471517LL)) && (((/* implicit */_Bool) -6575821521906944050LL)))))));
            /* LoopSeq 2 */
            for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                arr_35 [i_5] [i_5] [i_10] [i_5] = ((((arr_26 [i_7] [i_7]) < (arr_28 [i_10] [i_7] [i_10]))) ? (arr_23 [i_5] [i_7 - 3] [i_10]) : (((((/* implicit */_Bool) -6575821521906944036LL)) ? (4565756730915350397LL) : (0LL))));
                /* LoopSeq 4 */
                for (long long int i_11 = 1; i_11 < 18; i_11 += 1) 
                {
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_7 - 2])))))));
                    var_31 = var_11;
                    arr_38 [1LL] [1LL] [i_7] [i_11] [7LL] = arr_33 [i_5] [i_7 - 3] [i_10] [i_5];
                    var_32 = ((/* implicit */long long int) max((var_32), (arr_36 [i_10] [i_10] [i_10] [i_10])));
                    arr_39 [i_5] [i_11] [14LL] [i_10] [i_11] = ((((/* implicit */_Bool) 1125899906580480LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775794LL)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : (arr_28 [i_7 + 1] [i_7 - 2] [i_11]));
                }
                for (long long int i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                {
                    var_33 = arr_27 [i_12];
                    /* LoopSeq 1 */
                    for (long long int i_13 = 2; i_13 < 16; i_13 += 4) 
                    {
                        arr_44 [i_10] [3LL] [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_10])) ? (arr_16 [6LL]) : (arr_17 [i_10])))) && (((/* implicit */_Bool) ((arr_18 [i_13]) >> (((arr_34 [i_5] [i_5] [19LL]) - (8576390970692079015LL))))))));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_7 - 1])) && (((/* implicit */_Bool) arr_30 [i_7 + 1]))));
                        var_35 = ((((((/* implicit */_Bool) arr_26 [10LL] [i_12])) ? (var_15) : (arr_28 [i_10] [i_10] [i_10]))) + (((((/* implicit */_Bool) 631816864589900588LL)) ? (11LL) : ((-9223372036854775807LL - 1LL)))));
                        var_36 &= ((((/* implicit */_Bool) ((arr_33 [18LL] [i_7 - 1] [i_7] [18LL]) | (arr_26 [i_10] [i_12])))) ? (arr_18 [i_7 + 1]) : (arr_22 [i_7] [i_10] [i_12]));
                        arr_45 [i_5] [i_7] [i_7] [i_10] [14LL] [i_13 + 3] = ((arr_41 [i_13 + 4] [i_7 - 3]) & (arr_41 [i_13 + 1] [i_7 - 1]));
                    }
                    var_37 = ((arr_42 [i_5] [8LL] [6LL] [i_10] [6LL]) % (((/* implicit */long long int) ((/* implicit */int) ((arr_41 [i_5] [i_10]) > (var_7))))));
                }
                for (long long int i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                {
                    var_38 = ((((/* implicit */_Bool) arr_25 [i_5])) ? (arr_30 [15LL]) : (arr_28 [i_5] [i_7 - 1] [i_14]));
                    arr_48 [i_5] [i_7] = arr_34 [i_5] [i_7 - 1] [4LL];
                    arr_49 [10LL] [i_7 - 3] = ((((((/* implicit */_Bool) arr_36 [i_10] [i_7] [i_10] [i_14])) ? (arr_24 [i_5] [i_5]) : (arr_47 [i_5] [4LL] [10LL] [10LL]))) - (((((/* implicit */_Bool) arr_16 [17LL])) ? (arr_30 [i_5]) : (arr_28 [i_5] [i_5] [i_5]))));
                }
                for (long long int i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
                {
                    arr_52 [1LL] [i_15] |= ((/* implicit */long long int) ((arr_22 [i_7 - 2] [i_7 - 2] [i_7 - 2]) != ((-(arr_46 [i_5] [i_7] [18LL] [i_15])))));
                    var_39 ^= ((((/* implicit */_Bool) arr_41 [i_7 - 2] [i_7 - 3])) ? (arr_41 [i_7 + 1] [i_7 - 2]) : (arr_41 [i_7 - 3] [i_7 + 1]));
                    arr_53 [i_5] [i_5] [i_5] [i_5] = var_9;
                }
                var_40 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_1)))) && (((((/* implicit */_Bool) arr_29 [i_5] [2LL] [i_10])) || (((/* implicit */_Bool) arr_51 [i_5] [i_5] [i_7] [i_5] [i_10] [12LL]))))));
                var_41 = ((1684347813353731924LL) ^ (((((/* implicit */_Bool) arr_40 [i_7] [i_7] [i_7] [i_10] [i_7] [4LL])) ? (-8516999769086630102LL) : (11LL))));
            }
            for (long long int i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                var_42 ^= ((arr_24 [i_5] [5LL]) | (-1LL));
                var_43 = ((-6575821521906944014LL) / (6575821521906944064LL));
            }
            /* LoopNest 2 */
            for (long long int i_17 = 1; i_17 < 16; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    {
                        arr_63 [19LL] [i_7] [9LL] = (((((-9223372036854775807LL - 1LL)) - ((-9223372036854775807LL - 1LL)))) * (((((/* implicit */_Bool) var_9)) ? (arr_59 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_43 [i_7] [i_7 - 2] [i_17 - 1] [i_5] [5LL] [i_7] [i_5]))));
                        var_44 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_5] [8LL] [i_5]))));
                        /* LoopSeq 3 */
                        for (long long int i_19 = 1; i_19 < 19; i_19 += 3) 
                        {
                            arr_67 [i_5] [i_5] [i_17] [i_17] [i_5] &= ((((/* implicit */_Bool) (+(-6575821521906944030LL)))) ? (3410151285817629850LL) : (-4607643810958169357LL));
                            var_45 &= ((arr_40 [i_7 + 1] [i_17 + 3] [i_17 + 4] [i_7 + 1] [i_19 - 1] [i_17 + 4]) / (arr_40 [i_7 - 1] [i_17 + 1] [i_17 + 3] [i_18] [i_19 - 1] [i_19]));
                        }
                        for (long long int i_20 = 1; i_20 < 19; i_20 += 4) 
                        {
                            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_17])))))));
                            arr_72 [i_5] [i_5] [i_20] [i_17] [i_18] [i_5] = arr_68 [15LL] [i_18] [i_7 + 1] [i_7 + 1];
                            arr_73 [i_20] [i_17] [i_17] [11LL] [i_17 + 1] = arr_18 [i_20];
                            var_47 = (+(arr_30 [i_5]));
                        }
                        for (long long int i_21 = 0; i_21 < 20; i_21 += 1) 
                        {
                            var_48 = arr_71 [i_21] [i_21] [i_21] [3LL] [i_21];
                            var_49 = ((((/* implicit */_Bool) arr_28 [i_7 - 2] [i_17 + 2] [i_18])) ? (arr_69 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_69 [i_7 - 2] [i_7 - 2] [i_17 + 2] [i_17 + 4] [i_21] [i_7]));
                            arr_78 [i_5] [i_5] [i_17] [i_17 + 3] [8LL] = ((((/* implicit */_Bool) 6378443003070604748LL)) ? (-8144329909360482987LL) : (5196451191684014878LL));
                        }
                        arr_79 [i_18] [i_17] [i_7] [i_5] = arr_40 [8LL] [5LL] [i_7] [i_7 - 3] [i_7 - 3] [14LL];
                    }
                } 
            } 
        }
    }
}
