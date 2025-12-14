/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36863
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
    var_18 = ((/* implicit */unsigned long long int) (-(var_13)));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((((-2717347) + (2147483647))) >> (((((/* implicit */int) (unsigned char)50)) - (19))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) var_2))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)7361))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_16);
                var_21 = ((/* implicit */long long int) var_9);
            }
        }
    }
}
