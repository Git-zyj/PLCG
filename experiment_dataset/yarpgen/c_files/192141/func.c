/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192141
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [(unsigned short)9] [i_0]))))));
        var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_11)))))) ? (((/* implicit */int) max((arr_1 [i_0]), (var_8)))) : (min(((~(((/* implicit */int) (unsigned short)5)))), (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)21)) + (((/* implicit */int) arr_1 [i_1])))))) - ((-(((/* implicit */int) max((arr_2 [(unsigned short)13]), ((unsigned short)65525))))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)11] [(unsigned short)8]))))))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) & (((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) arr_2 [i_1]))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((unsigned short) arr_8 [i_2]))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_7 [i_3]))));
            arr_11 [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_3])) ? (((/* implicit */int) arr_9 [i_2] [i_3] [i_2])) : (((/* implicit */int) var_13))));
        }
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            arr_14 [i_2] [(unsigned short)13] [i_4] &= var_3;
            arr_15 [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_2]))));
        }
    }
    var_21 &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) var_7)))));
}
