/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43274
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)84)) / (var_4))), (((/* implicit */int) var_0))))) ? (max((var_1), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_5)) : (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned char) max(((~(((/* implicit */int) (signed char)33)))), (((/* implicit */int) ((short) arr_1 [i_0])))))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((886488529U) > (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))))) ? (((((/* implicit */_Bool) var_17)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : ((+(3408478786U)))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_22 |= (+(98875999U));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_12 [i_4] [i_4] = ((/* implicit */_Bool) 98876024U);
                        arr_13 [i_1] [i_4] [i_1] [i_1] = ((/* implicit */int) (-(7015413277600109351LL)));
                        var_23 -= ((/* implicit */signed char) (unsigned short)44510);
                    }
                } 
            } 
        } 
        arr_14 [i_1] [i_1 - 1] = ((/* implicit */unsigned char) arr_6 [i_1] [i_1]);
    }
}
