/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33794
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
    var_19 = ((/* implicit */int) var_17);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((((((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0])), (arr_2 [i_0])))) % (((((/* implicit */int) var_6)) & (((/* implicit */int) arr_4 [i_0])))))) + (2147483647))) >> (((max((4294967295U), (((/* implicit */unsigned int) arr_2 [i_0])))) - (4294967265U))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) arr_2 [i_0]);
                arr_7 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_18))))))))) & ((~(((4294967293U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((0U) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_4 [i_0]))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 3] [i_0])) & (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3268450221U)))) ? ((-(arr_3 [i_0]))) : (((((/* implicit */_Bool) var_16)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) 659097400)))))))));
            }
        } 
    } 
}
