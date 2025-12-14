/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4569
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        arr_4 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))) : (((unsigned long long int) arr_2 [i_0] [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)27)) : (((/* implicit */int) arr_1 [i_1])))))));
        var_16 = ((/* implicit */unsigned short) var_6);
        var_17 -= ((/* implicit */unsigned long long int) var_1);
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (3664515414281238064ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))));
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned short) 3824741356U);
                        var_20 |= ((/* implicit */long long int) arr_7 [2LL]);
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))));
}
