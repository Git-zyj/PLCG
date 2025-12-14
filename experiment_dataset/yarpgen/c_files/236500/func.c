/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236500
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */int) var_13)) * (((/* implicit */int) var_8)))) : (((/* implicit */int) var_6))))));
    var_18 = var_3;
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_4))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */int) var_7))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_9), (var_12)))) ? (max((((/* implicit */int) var_13)), (var_16))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (var_1))))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (var_16))))));
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), (var_8)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
}
