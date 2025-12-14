/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198983
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
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 1671641950))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            var_17 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
            arr_5 [i_1] [i_0] = ((/* implicit */int) var_6);
        }
        var_18 -= (~(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_9 [i_2] &= ((/* implicit */unsigned int) ((_Bool) arr_8 [i_2] [i_2]));
        arr_10 [i_2] = ((/* implicit */signed char) (+((+(((/* implicit */int) var_7))))));
        var_19 += ((/* implicit */signed char) var_7);
        arr_11 [i_2] = ((/* implicit */int) (+(28ULL)));
    }
}
