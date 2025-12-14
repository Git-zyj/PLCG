/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234504
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
    var_18 = ((/* implicit */int) var_6);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((var_9) ? (((/* implicit */int) (short)-29808)) : (((/* implicit */int) (short)-4867)))))) ? (((((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */int) var_12)))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) : (var_8)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_20 ^= ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_17)))) ? (((arr_0 [i_0 + 1] [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (-1142940952))) : (((/* implicit */int) (!((_Bool)1)))));
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [8])))) ^ (((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1]))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) 1467218334))));
        var_23 -= ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) : (((arr_0 [i_0] [9]) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) arr_1 [15])))));
    }
}
