/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42236
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_2])) : (var_3)))) : ((~(var_1)))));
                    var_18 |= ((/* implicit */short) var_5);
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1]))) != (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [(unsigned char)16])) : (arr_4 [i_0]))))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
}
