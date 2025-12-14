/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25884
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(short)2] [i_1] [i_1] [8])) || (((/* implicit */_Bool) arr_1 [i_0]))))), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2)))) : (min((arr_1 [i_0]), (((/* implicit */unsigned int) var_6)))))))));
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_2 [i_0 + 3] [(_Bool)1] [i_2]))));
                }
            } 
        } 
    } 
    var_14 *= ((((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (var_11))) >= (((/* implicit */int) var_7))))) < (((/* implicit */int) (signed char)-114)));
}
