/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43732
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
    var_14 |= var_1;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_15 = ((/* implicit */short) ((unsigned int) -194462525));
            var_16 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (unsigned short)13887)))));
            var_17 = ((/* implicit */short) (+(arr_0 [i_0])));
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (short)-28808)) | (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */int) (short)28809)) > (((/* implicit */int) (signed char)-26)))))));
            var_19 *= ((/* implicit */short) var_1);
        }
        arr_9 [i_0] = ((((/* implicit */_Bool) (short)32753)) ? (((-1293669906) / (((/* implicit */int) var_4)))) : (((/* implicit */int) var_13)));
        arr_10 [i_0] = ((/* implicit */short) var_3);
    }
}
