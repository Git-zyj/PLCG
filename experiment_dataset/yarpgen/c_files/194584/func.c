/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194584
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) 2147483638))));
                    arr_8 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [23U] [i_1]))) : (var_3))) : (((/* implicit */long long int) arr_7 [i_2] [i_1] [i_0] [i_0]))));
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_14))));
        var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)173)) < (((/* implicit */int) arr_3 [9]))));
        var_18 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
        arr_9 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((1637046919U) < (0U))) ? (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)28))));
    }
    var_19 = ((/* implicit */short) var_4);
}
