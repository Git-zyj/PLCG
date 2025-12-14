/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4293
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))) - (((unsigned long long int) var_3))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((9358083541277857585ULL) != (var_9))))));
    var_16 = var_7;
    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned char)208)))))))) <= (min((var_4), (((/* implicit */unsigned int) var_13))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((arr_6 [(short)15] [(short)15]) & (((/* implicit */long long int) ((/* implicit */int) (short)3684))))) : (((/* implicit */long long int) ((unsigned int) arr_1 [1U])))));
                    arr_9 [i_1] |= ((/* implicit */short) var_9);
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)64))))) : ((~(var_12)))))));
                }
            } 
        } 
    } 
}
