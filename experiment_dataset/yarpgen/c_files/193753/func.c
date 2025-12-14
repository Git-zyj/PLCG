/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193753
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_13))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1]))))));
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        arr_19 [i_6] [i_6] [i_6] [(_Bool)1] [(_Bool)1] [i_6] = ((/* implicit */unsigned int) arr_18 [i_3] [i_4] [i_6]);
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_5]))) / (arr_15 [i_4] [i_4] [i_5])))) ? (arr_15 [i_3] [i_4] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5])))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_15 [i_3] [i_4] [i_4])))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_14 [i_5] [i_5])) : (((/* implicit */int) arr_16 [i_3] [i_4] [i_5] [3])))) : (((/* implicit */int) arr_13 [i_5]))));
                        arr_20 [i_3] [i_4] [i_3] [i_6] [i_3] &= ((/* implicit */short) ((long long int) (+(((/* implicit */int) var_13)))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_23 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4])) || (((/* implicit */_Bool) arr_11 [i_7]))))) : (((/* implicit */int) var_0))));
                        arr_24 [i_7] [i_5] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((int) arr_21 [i_3] [i_3] [i_3] [i_4] [i_5] [i_7]))), (arr_21 [i_3] [i_3] [i_4] [i_5] [i_7] [i_7]))), (min((((arr_21 [i_7] [i_5] [i_4] [i_4] [i_4] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_9 [i_4])))))))));
                    }
                    var_22 = ((/* implicit */short) arr_14 [i_5] [i_4]);
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                arr_30 [i_3] [i_4] [2U] [i_8] [i_9] [i_9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 7396571214264548376ULL)) ? (11050172859445003247ULL) : (((/* implicit */unsigned long long int) 946374824)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 946374824)) ? (((/* implicit */int) arr_16 [i_3] [i_4] [i_8] [i_9])) : (((int) 11050172859445003239ULL)))))));
                                var_23 = (~(((/* implicit */int) arr_25 [i_3])));
                                var_24 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_14 [i_3] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) : (((arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_8] [i_4]))))))));
                                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [i_3]))));
                            }
                        } 
                    } 
                    var_26 += (~(((/* implicit */int) (!(((/* implicit */_Bool) 11050172859445003209ULL))))));
                }
            } 
        } 
    } 
    var_27 += ((/* implicit */long long int) var_16);
}
