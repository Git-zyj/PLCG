/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33657
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) arr_1 [i_0] [i_1]))));
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3594083813U), (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */int) (short)4131)) : (((/* implicit */int) var_1)))))));
                var_14 = (~((+(((arr_2 [i_0] [i_1] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                var_15 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 2147483647)) ? (((arr_2 [i_0] [i_0] [i_0]) * (arr_2 [i_0] [i_0] [i_1]))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [i_0] [i_0] [i_1]))))) < (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_3), (var_1))))) % (arr_0 [i_0]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-101), ((signed char)-111))))))) << (((((/* implicit */int) var_10)) + (7239)))));
}
