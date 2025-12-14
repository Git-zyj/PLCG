/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22852
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
    var_19 ^= ((/* implicit */unsigned int) var_13);
    var_20 |= ((/* implicit */short) var_8);
    var_21 |= ((/* implicit */_Bool) max((2904851444493960459ULL), (((/* implicit */unsigned long long int) 1821819195))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_0] [i_0]));
        var_22 = ((/* implicit */int) arr_1 [i_0]);
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((_Bool) arr_1 [i_0])))));
        var_24 ^= ((_Bool) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned char)77))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_25 += ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [1])) ? (((/* implicit */int) arr_5 [(_Bool)1])) : (((/* implicit */int) arr_5 [(short)8]))));
        var_26 -= ((/* implicit */_Bool) arr_6 [14]);
        arr_7 [i_1] [i_1] = ((/* implicit */short) arr_4 [i_1]);
    }
}
