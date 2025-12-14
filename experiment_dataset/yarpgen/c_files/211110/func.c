/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211110
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_9))));
                    arr_7 [(signed char)7] [(signed char)7] = ((/* implicit */unsigned long long int) (short)-28348);
                }
            } 
        } 
        var_19 *= ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_0])) + (96))) - (15)))));
    }
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_12)))))));
    var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16101)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) : (max((-5345357991842171651LL), (var_0)))))) ? (((((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : ((+(var_14))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_17))))), (var_9)))));
}
