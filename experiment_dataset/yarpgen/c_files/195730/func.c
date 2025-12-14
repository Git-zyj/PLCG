/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195730
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
    var_13 = ((/* implicit */unsigned char) var_10);
    var_14 = var_6;
    var_15 ^= ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) max(((unsigned char)192), (((unsigned char) (unsigned char)64))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (unsigned char)184))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_18 = (unsigned char)89;
            var_19 = ((/* implicit */unsigned char) (short)7);
        }
    }
    /* vectorizable */
    for (short i_2 = 2; i_2 < 8; i_2 += 3) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)63)) == (((/* implicit */int) var_0))));
        var_20 = ((/* implicit */int) ((unsigned char) ((var_5) - (((/* implicit */int) (unsigned char)104)))));
    }
}
