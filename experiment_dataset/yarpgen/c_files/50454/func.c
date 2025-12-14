/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50454
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_10 = ((/* implicit */int) (-(arr_1 [i_0] [i_0])));
        var_11 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 4]))) : (arr_2 [i_0 + 1]))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_3 [(_Bool)1])), (var_0))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            var_12 = ((/* implicit */long long int) var_4);
            var_13 ^= ((/* implicit */short) 8534903306186947381LL);
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-8)))))));
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((_Bool) -267335643676208002LL)))));
            var_16 = ((/* implicit */long long int) arr_9 [i_2 - 1]);
        }
        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28897)) ? (((/* implicit */int) var_1)) : (2147483647))))));
        arr_10 [i_1] [11U] = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
        arr_11 [i_1] = ((/* implicit */unsigned char) -400346376);
    }
    var_18 = ((/* implicit */signed char) (+(min((((/* implicit */int) var_0)), (max((var_7), (((/* implicit */int) var_0))))))));
}
