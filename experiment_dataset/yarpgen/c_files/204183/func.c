/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204183
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            arr_5 [i_0] [i_0 - 2] = ((/* implicit */signed char) arr_3 [i_1 - 2] [i_1 + 1] [i_1 + 1]);
            arr_6 [11U] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_6);
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
            arr_8 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
        }
        arr_9 [i_0] [(_Bool)1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32768))));
    }
    var_16 = ((/* implicit */short) var_1);
}
