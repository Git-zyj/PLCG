/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223209
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
    var_20 = ((/* implicit */short) ((((((/* implicit */unsigned int) (~(var_1)))) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_19))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_16))))))) : (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (var_14)))) | (((/* implicit */int) var_5))))));
    var_21 = ((/* implicit */_Bool) (~((+(var_19)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_0] [i_2 + 2] [i_2] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_0 [i_1] [i_2 + 1])))) > (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_2])) == (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))))));
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-((+(((arr_5 [i_0] [i_2]) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_2 - 3])) : (((/* implicit */int) arr_4 [i_0]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) ^ (((var_16) ^ (var_18))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_17)) & (((((/* implicit */_Bool) var_17)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
}
