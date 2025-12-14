/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227799
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
                var_15 = ((/* implicit */_Bool) (((((((-(((/* implicit */int) var_10)))) - (((((/* implicit */int) var_1)) * (((/* implicit */int) var_3)))))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) ((var_5) || (var_5))))) - (1)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_13)), (-1)))) ? (((((/* implicit */_Bool) (unsigned short)50416)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0] [i_3 + 1])))) : (((/* implicit */int) arr_9 [i_0] [i_3 - 1] [i_1] [i_3]))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((signed char) ((signed char) arr_5 [i_1 + 4]))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1 + 3] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1 + 3] [i_1 + 4] [i_1 + 1] [i_1]))))) : (((/* implicit */int) ((_Bool) var_13)))));
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) min((var_1), (min(((unsigned short)50416), ((unsigned short)15119)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) min((var_11), (((/* implicit */signed char) var_0)))))))));
}
