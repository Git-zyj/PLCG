/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204119
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) var_8);
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (min((((/* implicit */unsigned long long int) arr_2 [3] [(signed char)8])), (max((3ULL), (((/* implicit */unsigned long long int) var_14)))))) : (((/* implicit */unsigned long long int) (-(-3584641187911535325LL))))));
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 24; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                arr_12 [i_4] [1LL] [i_4] = min(((~((+(var_14))))), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) var_6)))), ((~(((/* implicit */int) arr_8 [24LL])))))));
                arr_13 [i_3] [i_4] [20U] = ((/* implicit */short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 99712529))))), (max((((/* implicit */signed char) arr_8 [i_3 - 1])), (var_13)))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                            {
                                var_19 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-17))))));
                                var_20 = ((/* implicit */long long int) ((var_12) < (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            }
                            /* vectorizable */
                            for (long long int i_8 = 1; i_8 < 24; i_8 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned char) var_7);
                                var_22 -= ((/* implicit */unsigned char) ((arr_18 [(short)22] [i_3 - 1] [i_6] [i_6]) && (((/* implicit */_Bool) var_15))));
                                var_23 += (-(((/* implicit */int) var_13)));
                            }
                            for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)20148))))), (min((((/* implicit */unsigned long long int) var_14)), (arr_14 [i_3] [i_4] [(_Bool)1] [i_9]))))) : (((/* implicit */unsigned long long int) (~(var_14))))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_10))));
                            }
                            var_26 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (arr_14 [i_3] [i_3 - 2] [i_3] [i_3 - 2]))), (((/* implicit */unsigned long long int) (-(-99712530))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
