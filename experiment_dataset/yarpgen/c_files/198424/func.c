/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198424
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
    var_10 = ((/* implicit */int) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0 + 2] [(short)9]);
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))));
        arr_6 [i_0] [i_0 + 3] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        arr_11 [(_Bool)0] |= ((/* implicit */int) var_4);
        arr_12 [(unsigned char)2] = ((/* implicit */_Bool) ((arr_7 [i_1 + 2] [i_1 + 2]) ? (((/* implicit */int) arr_7 [i_1 + 4] [i_1 + 4])) : (((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2]))));
    }
    var_11 = ((/* implicit */short) ((((/* implicit */int) var_4)) | (var_3)));
    var_12 = ((/* implicit */int) (_Bool)0);
}
