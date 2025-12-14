/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35652
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_3))));
    var_18 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    for (unsigned short i_4 = 2; i_4 < 15; i_4 += 4) 
                    {
                        {
                            arr_11 [i_0] [(signed char)1] [0LL] [0LL] [i_0] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (short)-1))))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [(unsigned short)13])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15))))));
                            var_19 = ((/* implicit */int) 906773390U);
                        }
                    } 
                } 
            } 
            arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_9 [(signed char)2] [(signed char)2] [(unsigned char)3] [i_0] [(signed char)2] [i_1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)15))))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1])))))));
        }
        arr_13 [9U] &= ((/* implicit */unsigned char) ((arr_3 [(unsigned short)11]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        arr_14 [i_0] = ((var_4) / (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)104))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                {
                    arr_20 [i_6] [i_5] [i_0 + 1] = ((/* implicit */int) 20U);
                    arr_21 [i_6] [i_5] [i_0 - 2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) -5671386061925173153LL))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */short) var_9);
}
