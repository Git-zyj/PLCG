/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241834
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_20 = ((((/* implicit */int) (short)-26644)) >= (((/* implicit */int) (short)-26644)));
                            /* LoopSeq 1 */
                            for (short i_4 = 1; i_4 < 15; i_4 += 3) 
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (short)26644))));
                                var_22 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) 1254713759U)) ? (arr_11 [i_3] [i_4 + 1] [i_4] [i_4 - 1] [i_3]) : (((/* implicit */unsigned int) -1265323464))))));
                            }
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((1361556850U), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                arr_14 [i_0] [i_0] = ((/* implicit */signed char) max((min((arr_4 [7] [i_0] [7] [i_0]), (((/* implicit */short) arr_2 [i_0])))), (((/* implicit */short) ((unsigned char) (short)26643)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max(((+(var_8))), (((((var_5) - (((/* implicit */int) var_9)))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (var_0))))))))));
}
