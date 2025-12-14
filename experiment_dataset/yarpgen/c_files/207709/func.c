/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207709
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
    var_13 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(8589934591LL)))) ? (((((/* implicit */_Bool) var_5)) ? (8589934615LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) 8589934615LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (734782588149971558LL)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_15 *= ((/* implicit */signed char) (-((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-8589934591LL)))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_2] [i_2]))));
                        arr_14 [i_1] [i_1] [i_1] [(short)3] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((8589934591LL) != (-8589934591LL)))) >> (((((/* implicit */int) var_6)) + (51)))));
                        var_17 = ((/* implicit */unsigned char) (+(arr_12 [i_4] [i_2] [i_1] [i_2] [i_1])));
                    }
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_11))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (unsigned char)104))));
                        arr_17 [i_1] [i_2] [(_Bool)1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8589934592LL)) ? (-8589934616LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
                    }
                    for (short i_6 = 1; i_6 < 10; i_6 += 4) /* same iter space */
                    {
                        arr_22 [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (8589934591LL) : (((/* implicit */long long int) 4294967295U)))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_8 [i_2] [i_3 + 1]))))));
                        arr_23 [i_6] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */short) arr_0 [i_3 + 1] [i_6 + 3]);
                        arr_24 [i_2] [9U] [i_3] [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) 8589934610LL)) ? (arr_9 [i_2]) : (arr_6 [i_1] [i_6]));
                    }
                    for (short i_7 = 1; i_7 < 10; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
                        {
                            var_20 *= ((/* implicit */signed char) arr_27 [i_1]);
                            arr_30 [i_1] [i_2] [i_3 - 1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                            var_21 |= ((/* implicit */_Bool) var_6);
                        }
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) (signed char)73);
                            arr_34 [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) var_6);
                        }
                        arr_35 [i_1] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) -8589934600LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_3]))) : (-8727634839841928695LL)))));
                        arr_36 [i_7 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) arr_1 [i_3 - 1]))));
                        var_23 = ((/* implicit */unsigned long long int) ((arr_9 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93)))));
                        arr_37 [i_1] [i_2] [10U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */unsigned long long int) -2847522795564784028LL)) : (arr_19 [i_3] [i_2] [i_3])));
                    }
                    var_24 += ((/* implicit */unsigned int) (signed char)76);
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_3] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) 8589934610LL);
                                arr_44 [i_1] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_41 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_10 - 1] [i_10] [i_10 + 1]))));
                                arr_45 [i_3] [i_3] [i_3 - 1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) 8727634839841928694LL);
                                var_27 = ((/* implicit */signed char) min((var_27), (var_11)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_28 = ((/* implicit */_Bool) var_2);
    var_29 = ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned long long int) var_1))));
}
