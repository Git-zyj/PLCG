/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45670
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
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) ((arr_4 [i_0 - 1] [i_0 + 1]) ? (((var_16) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)13247)) : (((/* implicit */int) var_0))))));
            var_20 *= ((/* implicit */signed char) arr_5 [i_0 - 1] [i_0 + 2] [i_0 - 1]);
            var_21 = ((/* implicit */unsigned char) var_13);
        }
        arr_7 [i_0] = ((/* implicit */_Bool) var_15);
        arr_8 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) << ((((((-2147483647 - 1)) - (-2147483637))) + (16)))))) ? ((~(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) << ((((((((-2147483647 - 1)) - (-2147483637))) + (16))) - (5)))))) ? ((~(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))));
        var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (short)-15081)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)193)) : (505383011)))));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_10))))) : ((~(max((var_10), (var_9)))))));
}
