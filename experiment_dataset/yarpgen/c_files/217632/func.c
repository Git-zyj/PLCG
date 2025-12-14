/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217632
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
    var_20 ^= ((/* implicit */unsigned int) ((((var_13) == (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_9)))))) ? (((var_5) ? (((/* implicit */unsigned long long int) var_18)) : (max((((/* implicit */unsigned long long int) var_6)), (17036349400600201140ULL))))) : (((/* implicit */unsigned long long int) ((max((var_5), (var_10))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] [1LL] = ((/* implicit */int) (+(max((((/* implicit */long long int) var_6)), (var_2)))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)118))))));
                }
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((var_0) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) & (((/* implicit */int) var_15))));
                var_22 = ((/* implicit */int) ((((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))))) & (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) (!(var_10)));
}
