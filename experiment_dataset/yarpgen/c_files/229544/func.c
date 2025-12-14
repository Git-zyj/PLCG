/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229544
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
    var_13 &= ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            {
                var_14 &= ((/* implicit */signed char) (-(arr_2 [i_0 + 2])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 8; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1 - 1] [i_0] |= ((/* implicit */signed char) ((arr_7 [i_2 + 1] [i_1 - 3] [i_0 - 1] [i_0 - 4]) ? (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_7 [i_0 - 4] [i_0 - 1] [i_1] [i_2]))));
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)50101)))))));
                    var_16 = ((/* implicit */long long int) (!(((((/* implicit */int) var_1)) < (((/* implicit */int) var_5))))));
                    var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_8))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((var_10), (((signed char) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_4))))))))));
}
