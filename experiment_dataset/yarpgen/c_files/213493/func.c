/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213493
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_10 = ((unsigned int) ((unsigned int) 536870911U));
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    var_11 = ((/* implicit */short) min((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_2] [i_1])))))));
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)2])) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned char)247))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) - (arr_7 [i_0]))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6)))))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    arr_11 [i_3] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (signed char)63))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) : (0U))) : (((/* implicit */unsigned int) ((int) var_2)))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (short)16368))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */short) (((_Bool)1) ? (max((63LL), (((/* implicit */long long int) var_4)))) : (63LL)));
}
