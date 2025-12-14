/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236384
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((arr_0 [i_0] [i_0]), (((/* implicit */short) var_9)))), (((/* implicit */short) arr_3 [(unsigned short)5]))))) ? (min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [(short)11])))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_12)))));
            }
        } 
    } 
    var_18 -= ((((/* implicit */_Bool) (unsigned short)640)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)640)));
    var_19 = ((/* implicit */unsigned short) var_11);
}
