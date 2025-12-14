/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241531
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0 - 1]))))), (min((((/* implicit */int) max((arr_1 [i_0]), (arr_0 [i_0] [i_0])))), (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned char)217))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_11)) > (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */int) (unsigned char)13)) | (((/* implicit */int) (unsigned char)160))))));
        arr_4 [(unsigned char)0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(unsigned char)16])) & (((/* implicit */int) arr_1 [(unsigned char)16]))))) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)10])) ? (((/* implicit */int) arr_1 [(unsigned char)6])) : (((/* implicit */int) arr_1 [(unsigned char)20])))) : (((((/* implicit */_Bool) arr_1 [(unsigned char)6])) ? (((/* implicit */int) arr_1 [(unsigned char)4])) : (((/* implicit */int) arr_1 [(unsigned char)18]))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) | (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)226))))));
    }
    var_18 = var_4;
}
