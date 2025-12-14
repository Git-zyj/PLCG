/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206254
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))), (((((/* implicit */int) var_2)) + (((/* implicit */int) var_2)))))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 &= ((/* implicit */_Bool) ((2806528505U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_15 *= ((/* implicit */unsigned int) var_8);
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((var_9), (((/* implicit */long long int) var_6))))))) ? (((/* implicit */int) max((max((var_12), (((/* implicit */short) var_7)))), (((/* implicit */short) var_5))))) : (((/* implicit */int) var_7))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_11))));
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_10))))))) ? (((/* implicit */int) min((min((var_10), (((/* implicit */unsigned char) var_1)))), (((/* implicit */unsigned char) var_1))))) : (((/* implicit */int) var_13))));
    }
    var_19 = ((/* implicit */unsigned char) var_3);
}
