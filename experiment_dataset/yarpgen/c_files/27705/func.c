/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27705
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
    var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((+(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) - (((unsigned int) 14896262980800730713ULL))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_11)) : (max((var_2), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-4180))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (((~(min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) / (((/* implicit */long long int) 2288334551U))));
        arr_4 [i_0] [i_0] = ((_Bool) arr_1 [i_0]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_14 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)18]))) * (arr_6 [i_1] [i_1]));
        var_15 = ((/* implicit */unsigned long long int) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))))))));
        var_16 = ((/* implicit */unsigned int) var_9);
    }
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_17 = ((/* implicit */short) 1056964608U);
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */int) arr_1 [i_2])))))))) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */int) (unsigned short)64598))))) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
        var_19 = ((/* implicit */long long int) ((arr_7 [i_2]) | (((arr_7 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52998))) / (var_11))), (arr_7 [i_2])))));
    }
}
