/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234228
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
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(var_12)))))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0] [i_0 - 2]))))) : (((((((/* implicit */_Bool) 1164167416)) ? (((/* implicit */unsigned long long int) 0U)) : (13262823871644429833ULL))) * (var_13)))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (~(var_12)))) | (((((((/* implicit */_Bool) 6777386578252581108ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-4784780730375774644LL))) * (((/* implicit */long long int) ((arr_0 [i_0] [15U]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_11))))))));
    }
    for (unsigned int i_1 = 3; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_1 - 3])) : (((/* implicit */int) arr_1 [11U]))))) ? (((((/* implicit */_Bool) (signed char)-15)) ? (arr_3 [i_1 - 1] [i_1]) : (arr_3 [i_1 - 2] [i_1]))) : ((((+(((/* implicit */int) var_18)))) / (((/* implicit */int) (_Bool)1))))));
        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 3])) ? (((/* implicit */long long int) arr_3 [i_1] [i_1])) : (-4784780730375774644LL))) * (((/* implicit */long long int) (~(((/* implicit */int) max((var_17), (((/* implicit */unsigned short) (_Bool)1))))))))));
        var_22 &= ((/* implicit */unsigned short) ((((_Bool) ((unsigned short) arr_3 [i_1 - 1] [2LL]))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_9))));
        var_23 = ((/* implicit */signed char) min((var_23), ((signed char)70)));
    }
    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (max((var_16), (((/* implicit */long long int) var_6)))) : (((var_16) + (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */long long int) ((var_1) | (var_12)))) > (min((((/* implicit */long long int) var_17)), (var_2))))))));
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) * (var_3)))) ? (((/* implicit */int) ((_Bool) (((_Bool)1) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 10881256064166741466ULL)))))));
}
