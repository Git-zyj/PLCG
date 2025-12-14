/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219037
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = (signed char)46;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 4; i_2 < 16; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32443)) * (((/* implicit */int) arr_9 [i_2 - 3] [i_1]))));
                    arr_11 [i_0 - 1] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (signed char)-25))));
                }
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) max(((signed char)-45), (((signed char) var_3))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_3))));
}
