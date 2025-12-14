/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239797
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
    var_11 &= max((((/* implicit */unsigned int) var_9)), ((+(var_0))));
    var_12 = var_8;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 *= ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) var_4)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0]) ^ (arr_1 [i_0])));
        var_14 = arr_1 [i_0];
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_5 [i_1])))));
        var_15 += ((unsigned int) ((((/* implicit */_Bool) (unsigned char)117)) ? (3438757282U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) < (max((((/* implicit */unsigned int) var_2)), (var_3))))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((unsigned int) min((var_10), (var_9)))) : ((-(arr_3 [i_1] [i_1])))));
    }
    for (unsigned int i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        var_17 ^= ((unsigned int) ((unsigned char) (+(var_3))));
        var_18 = ((/* implicit */unsigned int) max((var_18), ((+(((((/* implicit */_Bool) var_3)) ? (arr_5 [12U]) : (arr_6 [(unsigned char)0] [i_2 + 2])))))));
    }
    var_19 = ((/* implicit */unsigned char) var_4);
    var_20 = ((unsigned int) 0U);
}
