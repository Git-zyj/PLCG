/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52343
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
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_1]))))) % (((unsigned int) arr_1 [i_1 + 1]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [2U] [i_3] &= ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) (short)16514)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14)))))) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_3 + 1] [i_2 - 1])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_3 - 3] [i_2 - 1]))))));
                            arr_13 [i_3] [i_1] [i_1] [(signed char)12] = ((/* implicit */unsigned short) arr_7 [i_1 + 1] [i_2] [i_3]);
                            var_17 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_3] [i_1])) ? ((+(((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2] [i_3])))) : (((/* implicit */int) var_14)))));
                            var_18 = ((/* implicit */unsigned int) var_14);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (max((var_11), (((/* implicit */unsigned int) var_2))))))));
    var_20 = ((/* implicit */unsigned int) var_10);
    var_21 &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
}
