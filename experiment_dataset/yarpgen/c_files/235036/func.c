/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235036
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0])))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_0])) > (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0])))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) (short)-4785))) / (var_6)))))));
        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_1))) >> (((((/* implicit */int) arr_1 [i_0])) + (25346)))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                {
                    var_24 += ((/* implicit */unsigned short) arr_10 [i_1]);
                    var_25 += ((/* implicit */unsigned int) arr_6 [i_3] [i_1]);
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (short)4785))));
        var_27 = ((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)24)))), (((/* implicit */int) arr_9 [i_1] [i_1]))));
        var_28 += ((/* implicit */short) arr_12 [i_1] [i_1] [i_1] [i_1]);
    }
    var_29 ^= ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) (short)4796)) ? (((/* implicit */long long int) var_0)) : (var_5))), (((/* implicit */long long int) var_18))))));
    var_30 += (((~(((/* implicit */int) var_8)))) >= (((((((/* implicit */int) (short)-4785)) + (var_2))) / (((/* implicit */int) (_Bool)1)))));
}
