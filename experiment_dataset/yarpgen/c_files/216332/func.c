/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216332
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [11] [(_Bool)1] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_5 [i_0] = ((/* implicit */long long int) (-((((_Bool)1) ? (((unsigned long long int) 3888740389U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1283806878U))))))))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_14 [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
            arr_15 [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) : (arr_1 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))));
        }
        arr_16 [i_1] [i_1] |= (~(min(((-(arr_1 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)9924)) << (((/* implicit */int) (_Bool)0))))))));
    }
    var_19 |= ((/* implicit */unsigned int) var_0);
    var_20 = ((/* implicit */signed char) var_11);
}
