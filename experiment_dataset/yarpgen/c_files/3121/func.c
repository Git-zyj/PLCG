/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3121
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
    var_20 = ((/* implicit */int) (!(((((/* implicit */int) var_17)) <= (((/* implicit */int) var_14))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_9)))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -1861868449)) ? (((/* implicit */int) (unsigned short)4794)) : (((/* implicit */int) (unsigned short)4808))));
            var_23 |= (~(12));
            arr_4 [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((_Bool) ((var_14) ? (((/* implicit */int) (unsigned short)60741)) : (((/* implicit */int) (short)-10283))))));
        }
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])), ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_0 - 1]))) : ((+(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (2839940646U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
    }
}
