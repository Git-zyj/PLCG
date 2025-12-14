/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244592
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0 - 1] [i_0] = (+(((/* implicit */int) arr_1 [i_0] [i_0 + 1])));
        var_16 = (+(((/* implicit */int) arr_0 [i_0 + 1])));
        var_17 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [10] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])))))));
        var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-32599)) && (((/* implicit */_Bool) (short)-32744))))) & (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_19 = ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_2])) ? (((((/* implicit */_Bool) 1785714275)) ? (1921630423) : (1785714267))) : (((/* implicit */int) arr_0 [i_2])));
            var_20 *= ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_2]))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_11 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1])) >= (((/* implicit */int) arr_0 [i_1]))));
            arr_12 [i_3] = ((((/* implicit */_Bool) arr_6 [i_3] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_3])) : (((/* implicit */int) arr_0 [i_3])));
        }
        var_21 = ((/* implicit */int) arr_1 [i_1] [i_1]);
    }
    var_22 += min((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_12)))))))));
    var_23 *= ((/* implicit */short) var_9);
}
