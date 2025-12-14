/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244058
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)58)))), (((/* implicit */int) var_14))))) ? (min(((+(((/* implicit */int) var_11)))), (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) max((var_0), (var_7))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))), ((+(((/* implicit */int) var_5))))));
        var_20 += ((unsigned char) (-(((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_0 [i_0] [(_Bool)1]))))));
        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) var_8))));
        var_23 += arr_3 [i_1] [i_1 + 1];
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1]))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_25 &= ((/* implicit */unsigned short) (+(((((/* implicit */int) var_12)) / (((/* implicit */int) arr_3 [i_1] [i_1]))))));
            var_26 = var_9;
            var_27 = ((/* implicit */unsigned char) arr_4 [i_1 + 1]);
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))));
        }
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            arr_10 [i_1] [(unsigned short)0] [i_1] = ((/* implicit */unsigned char) ((_Bool) arr_9 [i_1 + 1]));
            arr_11 [(_Bool)1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))));
        }
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_4] [i_4])) ? (((/* implicit */int) arr_13 [i_1 + 1] [i_1])) : (((/* implicit */int) (_Bool)1))));
            var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [(unsigned short)6]))));
            arr_14 [i_1 + 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (unsigned char)52))));
            var_31 = ((/* implicit */_Bool) arr_7 [i_1 + 1] [i_4] [(unsigned short)2]);
            arr_15 [i_1] [i_4] = arr_13 [i_1 + 1] [i_4];
        }
    }
}
