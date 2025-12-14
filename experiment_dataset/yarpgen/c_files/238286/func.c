/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238286
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
    var_10 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32767)) || (((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-17928))));
            arr_5 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((arr_1 [i_1]) - (667054266U))))))));
            arr_6 [i_1 - 2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 1033293016U))))) != (((/* implicit */int) arr_3 [i_0]))));
            var_11 = ((/* implicit */unsigned int) arr_2 [i_1 - 2] [i_1 - 2]);
            arr_7 [i_0] [(short)19] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
        }
        var_12 = arr_1 [i_0];
    }
}
