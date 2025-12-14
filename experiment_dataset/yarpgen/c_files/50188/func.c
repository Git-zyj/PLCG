/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50188
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
    var_17 = ((/* implicit */short) (!(((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) != (min((((/* implicit */long long int) (short)31)), (var_6)))))));
    var_18 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)12578)) : (((var_11) - (((/* implicit */int) (unsigned short)12571)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)12578))))) < ((~(var_9)))));
                    var_20 = ((/* implicit */int) arr_5 [i_0 + 1]);
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0 - 2])) / (((/* implicit */int) ((((/* implicit */int) (unsigned short)43783)) > (((/* implicit */int) (unsigned short)12581)))))));
    }
    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)52979)) ? (arr_10 [i_3]) : (((/* implicit */int) arr_7 [i_3 + 3])))) % (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_3] [i_3] [i_3 + 1])), (arr_0 [i_3 - 2] [i_3]))))));
        var_22 -= ((/* implicit */unsigned long long int) (+(var_4)));
        /* LoopSeq 3 */
        for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            arr_15 [i_3] [i_3] [i_3 - 2] = ((/* implicit */unsigned char) var_12);
            arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_14 [i_3] [i_4]) >> (((arr_14 [(short)5] [i_3]) - (1690954891)))))) ? (((/* implicit */int) (unsigned short)12572)) : (min((((/* implicit */int) arr_0 [i_4] [i_3 - 2])), (728665111)))));
        }
        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            var_23 = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (min((((/* implicit */long long int) 1835008)), (var_14)))))) ? (((((/* implicit */_Bool) arr_10 [i_3 + 2])) ? (arr_10 [i_3 + 2]) : (var_1))) : (((/* implicit */int) arr_5 [i_3])));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_13 [i_3]))));
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                arr_22 [i_6] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 34926205)) ? (((/* implicit */int) arr_21 [i_3])) : ((~(((/* implicit */int) arr_6 [i_6] [i_3]))))));
                arr_23 [i_5] = ((/* implicit */short) arr_14 [i_3 + 1] [i_3 + 1]);
            }
            /* LoopSeq 2 */
            for (short i_7 = 2; i_7 < 13; i_7 += 4) 
            {
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5])) ? (((/* implicit */int) (unsigned short)52965)) : (((/* implicit */int) arr_24 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_3])))))))))) : (((((/* implicit */_Bool) arr_17 [i_7 + 1] [i_7 - 1] [i_5])) ? (((/* implicit */unsigned int) -67858404)) : (arr_17 [i_7 + 1] [i_7 - 1] [i_5])))));
                var_26 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3])) - (((/* implicit */int) arr_6 [i_3] [i_3]))));
            }
            for (signed char i_8 = 2; i_8 < 11; i_8 += 4) 
            {
                var_27 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -67858387)) ? (((/* implicit */int) arr_1 [i_8] [i_5])) : (var_15)))) ? (17428952342935252534ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_5])) ? (var_13) : (((/* implicit */unsigned int) 67858403))))))));
                var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) arr_5 [i_5 + 1])) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((-67858411) >= (((/* implicit */int) (short)-2)))))));
                var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) min((arr_14 [i_5 - 1] [i_8 + 1]), (arr_14 [i_5 - 1] [i_8 + 1])))) ? (arr_14 [i_5 - 1] [i_8 + 1]) : (min((arr_14 [i_5 - 1] [i_8 + 1]), (arr_14 [i_5 - 1] [i_8 + 1])))))));
                var_30 ^= ((/* implicit */short) arr_2 [i_8] [i_3]);
            }
            arr_29 [i_3] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3 - 2] [i_3])) ? (((-1737349066) - (var_11))) : (((/* implicit */int) arr_0 [i_3] [i_5 - 1]))))), (min((max((17428952342935252534ULL), (((/* implicit */unsigned long long int) var_3)))), (((((/* implicit */_Bool) arr_11 [i_3] [i_5 - 1])) ? (((/* implicit */unsigned long long int) arr_25 [(unsigned short)2] [i_5])) : (14851304996701964339ULL)))))));
        }
        for (short i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) min((min((((((/* implicit */_Bool) (unsigned short)12555)) ? (((/* implicit */unsigned int) var_16)) : (2455279379U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_3])) ? (((/* implicit */int) arr_5 [i_9])) : (((/* implicit */int) arr_7 [i_3]))))))), (((/* implicit */unsigned int) arr_19 [i_3] [i_9] [i_3] [i_3 - 2])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_10 = 1; i_10 < 12; i_10 += 1) 
            {
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_10 + 1] [i_10 + 2] [i_10 + 2])) ? (arr_18 [i_10 + 1] [i_10 + 2] [i_10]) : (arr_18 [i_10 + 1] [i_10 + 2] [i_10])));
                var_33 *= ((/* implicit */signed char) 17428952342935252534ULL);
                var_34 = arr_30 [i_10 + 2] [i_9] [(short)5];
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    for (long long int i_12 = 1; i_12 < 13; i_12 += 4) 
                    {
                        {
                            arr_38 [i_3 + 1] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_10 + 2])) ? (var_15) : (arr_14 [i_3 + 2] [i_3 - 1])));
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_3])) != ((-(var_11))))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */signed char) (unsigned short)12572);
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_13 = 2; i_13 < 11; i_13 += 4) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_13 - 1] [i_13 + 1] [i_13] [i_13 + 2])) >= (((/* implicit */int) arr_27 [i_13 + 2] [i_13 + 2] [i_13] [i_13 - 1])))))));
        var_38 -= (((_Bool)0) ? (((/* implicit */int) (signed char)-48)) : ((-(67858395))));
        arr_41 [i_13 + 1] = ((/* implicit */int) arr_5 [i_13 - 1]);
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            for (int i_15 = 0; i_15 < 14; i_15 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_16 = 1; i_16 < 13; i_16 += 4) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned long long int) 2746219214U);
                        var_40 = ((/* implicit */short) arr_46 [i_16 + 1] [8] [i_13 + 1]);
                    }
                    for (signed char i_17 = 1; i_17 < 13; i_17 += 4) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_17 [i_14] [i_14] [i_13])))) ? (((32) << (((1188191058U) - (1188191038U))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_13] [i_14] [i_15] [i_15]))) < (var_14)))))))));
                        arr_54 [i_13] [i_13 - 2] [i_13 - 2] [i_13] [i_13 - 2] = (-(((/* implicit */int) (signed char)71)));
                    }
                    for (long long int i_18 = 4; i_18 < 11; i_18 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)65))));
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_50 [i_13] [i_18 - 4] [i_13] [i_18] [i_13] [i_13 + 2])) ? ((-(201692950U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 34)) ? (406806120) : (67858413))))));
                        var_44 -= ((/* implicit */_Bool) arr_20 [i_13] [i_13]);
                        var_45 = ((/* implicit */short) 8118968963957929802LL);
                    }
                    var_46 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_13 + 3] [i_13 + 3] [i_15] [i_13 + 3])) ? (arr_34 [i_13 + 3] [i_13 - 2] [i_13] [i_13 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_13] [i_13 + 1] [i_14] [i_14])))));
                    var_47 = ((5007846339608219261ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_13]))));
                }
            } 
        } 
        var_48 = ((/* implicit */_Bool) max((var_48), ((!((_Bool)1)))));
    }
    /* vectorizable */
    for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 4) 
    {
        var_49 = ((/* implicit */_Bool) var_12);
        var_50 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_19])) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) arr_57 [i_19])) ? (((/* implicit */unsigned long long int) -6330975685247280930LL)) : (4566231860816492328ULL)))));
        var_51 = ((/* implicit */unsigned char) arr_58 [i_19]);
    }
}
