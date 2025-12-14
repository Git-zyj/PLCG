/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208100
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) + (((/* implicit */int) ((var_13) > (((var_5) ? (var_13) : (((/* implicit */int) var_9)))))))));
    var_19 = var_9;
    var_20 |= ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = (-(((((/* implicit */_Bool) -2023155041)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_3] = ((((((/* implicit */_Bool) var_12)) ? (((var_15) - (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((/* implicit */int) var_14))))))) & (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_5)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) (short)-1)) == (((/* implicit */int) (unsigned char)19)))))));
                        var_23 += ((/* implicit */unsigned int) var_16);
                    }
                } 
            } 
        } 
        var_24 += ((/* implicit */signed char) var_15);
    }
}
