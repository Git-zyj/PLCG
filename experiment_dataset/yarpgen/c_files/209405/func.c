/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209405
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
    var_19 = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-5806)) : (((/* implicit */int) var_2)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [(unsigned char)11] [i_2] [i_1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_0]);
                    arr_10 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_2 + 2] [4] [i_2])) : (((/* implicit */int) arr_4 [i_2 + 2] [i_1] [i_0])))), (((((/* implicit */_Bool) arr_4 [i_2 + 3] [5LL] [i_1])) ? (((/* implicit */int) (short)5794)) : (((/* implicit */int) arr_4 [i_2 + 2] [i_1] [(short)11]))))));
                    var_20 = ((/* implicit */unsigned char) arr_6 [i_2 + 3] [i_1] [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) (~(((/* implicit */int) var_14))));
    var_22 |= ((/* implicit */short) var_1);
}
