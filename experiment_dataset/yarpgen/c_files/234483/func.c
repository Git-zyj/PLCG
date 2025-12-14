/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234483
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 -= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned char)3]))))));
        var_16 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0] [i_0 - 1]))));
    }
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_5))));
    /* LoopSeq 2 */
    for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        var_19 = arr_3 [i_1];
        var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */int) (short)8191)) ^ (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_1]))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-40)) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_2 + 2])) - (56)))));
        arr_8 [i_2] = ((/* implicit */long long int) ((unsigned char) (signed char)-63));
        /* LoopSeq 1 */
        for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            var_21 = ((/* implicit */long long int) (signed char)-28);
            var_22 *= ((/* implicit */short) arr_3 [i_3]);
        }
        var_23 ^= ((/* implicit */signed char) ((long long int) var_3));
    }
    var_24 += var_13;
}
