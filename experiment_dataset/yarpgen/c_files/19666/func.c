/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19666
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
    var_11 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_4))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 ^= (~(((/* implicit */int) var_0)));
            arr_5 [i_1] = ((/* implicit */unsigned int) var_10);
        }
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            arr_10 [i_0] [i_0] [i_0] = var_10;
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_14 = ((/* implicit */long long int) var_5);
            var_15 -= ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                arr_16 [i_3] [(signed char)9] [(signed char)9] = ((/* implicit */long long int) var_8);
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
            }
        }
    }
    var_17 ^= ((/* implicit */unsigned long long int) var_2);
    var_18 ^= ((/* implicit */_Bool) var_4);
}
