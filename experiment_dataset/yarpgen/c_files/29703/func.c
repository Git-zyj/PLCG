/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29703
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_6 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */int) ((unsigned char) ((signed char) -1474822571452860058LL)));
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
                    var_17 = ((/* implicit */unsigned char) (((+(700435190U))) >> (((17207528201548679879ULL) - (17207528201548679866ULL)))));
                }
                for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (~((-(1474822571452860075LL))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (!((!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_3] [17LL]))))))))))));
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (max((((/* implicit */long long int) arr_1 [i_0])), (1474822571452860069LL))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            arr_20 [i_6] [i_5] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) max((max((((_Bool) arr_5 [i_0] [i_3] [i_3])), (((((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_5] [i_6])) != (((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_3] [i_0] [i_0])))))), (((((/* implicit */_Bool) ((unsigned long long int) (signed char)-6))) && (((/* implicit */_Bool) arr_3 [i_5] [(_Bool)1]))))));
                            var_21 = ((/* implicit */unsigned char) min((max((var_13), (((/* implicit */unsigned long long int) -1778306595)))), (((/* implicit */unsigned long long int) min((var_14), (((long long int) arr_17 [i_1])))))));
                        }
                        arr_21 [i_0] [i_1] [i_3] [i_5] [i_5] = (-(max((((/* implicit */int) arr_19 [i_0] [i_1] [i_3] [i_5] [17U])), (arr_5 [(short)8] [i_3] [i_5]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 3; i_7 < 18; i_7 += 3) 
                        {
                            arr_25 [i_1] [i_0] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) -5096016397360995752LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1438071980)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */long long int) -2036451206)) : (-2744817804269021465LL)))))))) : (min((((/* implicit */long long int) min((((/* implicit */signed char) arr_24 [i_0] [i_1] [i_3] [i_5] [i_5] [i_3])), (arr_14 [i_0] [i_1] [(unsigned char)5] [2LL] [i_0])))), (arr_9 [i_7 + 1] [i_1] [i_1] [i_7 - 1])))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_0] [i_7] [i_3] [i_5] [i_7 - 3] [i_0])) << (((/* implicit */int) var_7)))))));
                        }
                    }
                    var_23 = ((/* implicit */signed char) max((max((max((((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (1474822571452860065LL))), (min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_3] [i_1] [i_0])))))), (((/* implicit */long long int) min((arr_17 [i_1]), (((/* implicit */signed char) var_7)))))));
                    arr_26 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_14);
                }
            }
        } 
    } 
    var_24 &= ((/* implicit */short) var_4);
    var_25 = ((/* implicit */int) max((var_0), (min((((/* implicit */long long int) (unsigned char)193)), (1474822571452860057LL)))));
    /* LoopSeq 3 */
    for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        arr_30 [10U] [i_8] |= ((/* implicit */unsigned int) ((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((-5865881931769996028LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84)))))) || (((/* implicit */_Bool) 1474822571452860057LL))))))));
        arr_31 [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((-9223372036854775791LL), (((/* implicit */long long int) (unsigned char)240)))))));
        var_26 = ((/* implicit */short) min((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) 1474822571452860066LL)) ? (((/* implicit */int) arr_17 [i_8])) : (var_2)))), (1474822571452860065LL)))));
        /* LoopSeq 2 */
        for (long long int i_9 = 3; i_9 < 10; i_9 += 2) 
        {
            var_27 *= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (~(var_0)))), (var_13))), (((/* implicit */unsigned long long int) arr_33 [i_9] [i_8]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((long long int) 0ULL)))));
                arr_38 [i_8] [i_9 - 2] = ((/* implicit */int) arr_18 [i_8] [i_9] [i_8] [i_8] [i_8]);
            }
            for (signed char i_11 = 1; i_11 < 9; i_11 += 4) 
            {
                var_29 = ((/* implicit */unsigned char) arr_11 [9] [i_11] [i_9] [i_8] [i_8] [i_8]);
                var_30 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */long long int) arr_18 [17] [i_11] [17] [9LL] [i_8])) : (var_6))))))), (min((min((((/* implicit */int) arr_15 [i_8] [i_8] [(unsigned char)6] [i_8])), (var_2))), (((/* implicit */int) arr_17 [i_8]))))));
                var_31 = ((/* implicit */unsigned int) (short)7821);
            }
        }
        for (unsigned int i_12 = 3; i_12 < 7; i_12 += 1) 
        {
            var_32 = (~(min((((/* implicit */int) arr_2 [14U] [i_12] [i_8])), (min((var_11), (((/* implicit */int) arr_22 [i_8] [i_8] [i_8] [i_8] [i_8] [i_12])))))));
            arr_46 [i_8] [i_8] [i_12] = (i_8 % 2 == 0) ? (((/* implicit */unsigned char) ((((arr_32 [i_8]) << (((var_13) - (11742792407710779848ULL))))) < (((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_12] [i_8] [i_12])) ? (arr_41 [i_8] [i_8] [i_8]) : (arr_32 [i_8])))))) : (((/* implicit */unsigned char) ((((((arr_32 [i_8]) + (9223372036854775807LL))) << (((var_13) - (11742792407710779848ULL))))) < (((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_12] [i_8] [i_12])) ? (arr_41 [i_8] [i_8] [i_8]) : (arr_32 [i_8]))))));
            arr_47 [i_8] [i_8] = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) -2086821314))))))) > (((/* implicit */int) (_Bool)0))));
        }
    }
    for (int i_13 = 2; i_13 < 10; i_13 += 1) /* same iter space */
    {
        arr_50 [i_13] = ((/* implicit */unsigned long long int) 2277212661498293437LL);
        arr_51 [i_13] = ((/* implicit */_Bool) max((((arr_41 [i_13] [i_13 - 1] [i_13]) | (arr_41 [i_13] [i_13 - 2] [i_13]))), (arr_41 [i_13] [i_13 + 1] [i_13])));
        arr_52 [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((-1474822571452860086LL), (1474822571452860085LL))))));
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 10; i_14 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3787272845U)))))));
        arr_55 [i_14] [i_14 - 2] |= ((/* implicit */long long int) ((short) (-(((/* implicit */int) (unsigned char)62)))));
        var_34 = ((/* implicit */int) arr_15 [i_14] [6] [i_14] [i_14]);
    }
}
