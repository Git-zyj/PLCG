/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52916
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) var_9)))) : ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
    }
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9))));
    /* LoopSeq 3 */
    for (unsigned char i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [(unsigned char)10] [i_1 + 2])))) : (((((/* implicit */int) arr_4 [(unsigned char)4] [i_1 + 3])) | (((/* implicit */int) arr_4 [i_1] [i_1 + 3]))))));
        arr_6 [i_1] = var_14;
    }
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(unsigned char)12])) ? (((/* implicit */int) ((unsigned char) arr_7 [i_2] [i_2]))) : (((/* implicit */int) arr_1 [i_2])))))));
        arr_10 [i_2] = arr_8 [(unsigned char)4];
        var_20 = var_1;
    }
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        arr_13 [i_3] = arr_12 [i_3];
        var_21 = var_13;
    }
}
