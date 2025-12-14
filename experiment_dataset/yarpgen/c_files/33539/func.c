/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33539
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_10))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))))))) : (((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned char) ((arr_2 [i_2 + 1] [i_2 - 1]) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_1])))))))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */int) (short)-11911)), (((((/* implicit */int) (short)11911)) ^ (2147483647))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [(short)6] [2U] [i_4 + 2] = ((/* implicit */short) 9306401398083800043ULL);
                                var_22 = ((/* implicit */short) max(((+(min((2137836677650853649ULL), (3870184686906329993ULL))))), (((((/* implicit */_Bool) max((arr_5 [i_4 + 2] [i_3 + 1] [2U] [2U]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_2]))))) ? (((arr_5 [i_0] [i_1] [i_2 + 1] [i_1]) & (arr_12 [i_3] [2ULL] [9ULL] [i_3 + 1] [4LL] [i_3 + 1] [i_3]))) : (arr_6 [i_4 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_14))));
    }
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */int) ((var_9) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_5])) ^ (((((/* implicit */int) var_11)) - (((/* implicit */int) arr_15 [i_5]))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) arr_15 [i_5])), (var_11)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5]))) : (5050817857149578438ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-11912)))))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) arr_15 [16ULL])) | (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27203))) == (12932011034043023971ULL))))))))));
        arr_18 [i_5] = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) var_5)) ? (arr_16 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) arr_15 [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28283)) < ((+(((/* implicit */int) var_9)))))))));
    }
    for (short i_6 = 1; i_6 < 15; i_6 += 3) 
    {
        arr_21 [i_6] |= ((/* implicit */_Bool) max((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_19 [i_6]))))))), (((int) arr_20 [i_6 - 1]))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 2; i_7 < 14; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            arr_34 [i_6] [i_7] [i_8 + 3] [i_8 + 3] [i_10] [i_9] [i_9] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_31 [i_6] [i_7] [i_6 - 1] [i_8 + 4] [i_7 - 2])) ? (((/* implicit */int) arr_31 [i_6 + 1] [(signed char)10] [i_6 + 1] [i_8 + 2] [i_7 - 1])) : (((/* implicit */int) var_10)))));
                            var_25 = ((/* implicit */unsigned int) 13395926216559973177ULL);
                            arr_35 [i_10] [i_10] [i_9] [i_8] [i_7] [i_7] [i_6] |= ((/* implicit */unsigned int) var_9);
                            var_26 = ((/* implicit */long long int) ((short) (unsigned short)0));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 3; i_11 < 15; i_11 += 1) 
                        {
                            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17109)) ? (((/* implicit */int) arr_28 [i_6 - 1] [i_7 + 1] [i_8 + 4] [i_11])) : (((/* implicit */int) (short)11910))))) <= (var_8)));
                            var_28 |= ((/* implicit */short) (_Bool)1);
                        }
                        var_29 = ((/* implicit */unsigned short) ((_Bool) (short)5060));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (+(min((((5050817857149578438ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11915))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_33 [i_6] [i_9]))))))))))));
                        var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((int) arr_29 [i_6 + 1] [i_7 - 2] [i_8 - 1]))), (max((arr_32 [i_7 - 1] [i_8 + 4]), (13395926216559973162ULL)))));
                        arr_38 [i_6] [i_6] [i_7 - 1] [i_8 + 3] [i_9] [i_8 + 3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((10462400750320478170ULL) <= (((/* implicit */unsigned long long int) -2147483642)))))));
                    }
                    var_32 = ((/* implicit */unsigned short) ((long long int) var_8));
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        var_33 |= ((/* implicit */short) (unsigned short)4095);
                        arr_42 [(_Bool)1] [(short)9] [i_7 + 2] [i_8 - 1] [i_12] = ((/* implicit */unsigned int) max(((+(((((/* implicit */unsigned long long int) arr_29 [i_6] [i_7 - 1] [i_12])) % (var_0))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_32 [i_7] [i_7 - 1])))));
                    }
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((unsigned int) arr_30 [i_6] [i_7] [i_7] [i_7] [i_6 - 1] [i_8 + 1] [i_7 + 2])))));
                    arr_43 [(unsigned short)10] [i_7] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_15 [i_7])), (-1745819534)))) && (((/* implicit */_Bool) 10462400750320478170ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_6 + 1] [i_7]))) : ((+(0U)))));
                }
            } 
        } 
        arr_44 [i_6] = ((/* implicit */long long int) arr_20 [i_6]);
        arr_45 [i_6] = ((/* implicit */short) arr_26 [i_6 + 1] [i_6 + 1]);
    }
    var_35 = ((/* implicit */unsigned long long int) (unsigned short)0);
    var_36 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) * (3006758910458245079LL)))));
    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)0), ((unsigned short)34759)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_18))) ^ (-9181283227360392837LL))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) || (((_Bool) var_12))));
}
