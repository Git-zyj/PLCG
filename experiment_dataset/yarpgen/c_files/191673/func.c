/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191673
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 += ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) (signed char)0)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((int) var_0))))));
                    var_13 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) arr_3 [(signed char)8] [i_0]))))) ? (((((/* implicit */_Bool) -1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2] [13U])) ^ (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1])) <= (((/* implicit */int) min((var_5), (((/* implicit */signed char) var_1)))))))) : (((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-15761))))));
                }
                var_14 = ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_1 [i_1 + 2] [i_1 + 2]))))) ? (((((/* implicit */_Bool) (short)15761)) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_0])) : (((/* implicit */int) arr_1 [i_1 + 2] [i_0])))) : (min((((/* implicit */int) (signed char)42)), (0))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((short) 1014957742U)))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((+(((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_9))))) : (var_9)));
}
