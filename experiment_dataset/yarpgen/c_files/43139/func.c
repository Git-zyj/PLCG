/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43139
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9)))))));
    var_17 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-33)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_18 = (-((+(arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_19 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -4642664863386421727LL))));
            arr_6 [i_0] [i_1] = (+(arr_0 [i_0] [i_0]));
        }
        var_20 = ((/* implicit */int) (~((~(1U)))));
        var_21 += ((unsigned short) (~(((/* implicit */int) arr_3 [(short)9]))));
    }
}
