/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197706
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1] [i_0])) * (((/* implicit */int) var_5)))))));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_10 [i_2])) : (arr_8 [i_2] [i_2])));
        var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_8 [6ULL] [i_2]) | (((/* implicit */int) (unsigned short)48474))))) ? (((/* implicit */int) var_4)) : (((arr_8 [i_2] [i_2]) & (((/* implicit */int) (unsigned short)48474))))));
        arr_12 [i_2] = ((/* implicit */long long int) arr_9 [i_2] [i_2]);
    }
}
