/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205465
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
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (unsigned short)5)))))));
                    arr_9 [i_0] [i_1] [i_2] |= ((/* implicit */short) ((((/* implicit */int) ((var_9) || (((/* implicit */_Bool) arr_0 [i_0] [i_0 + 4]))))) * (((/* implicit */int) arr_6 [(unsigned short)10] [i_0 - 1]))));
                    var_17 = ((/* implicit */short) var_14);
                    arr_10 [i_2] |= var_4;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_13);
}
