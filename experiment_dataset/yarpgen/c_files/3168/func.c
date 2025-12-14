/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3168
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)240))))))));
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-17144))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) max(((unsigned char)106), ((unsigned char)96))))))) ? ((+((-(((/* implicit */int) var_10)))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_22 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
        var_23 = ((/* implicit */short) ((unsigned char) arr_1 [i_0]));
        arr_2 [i_0] = ((/* implicit */unsigned char) (short)127);
        arr_3 [i_0] = ((/* implicit */unsigned char) var_10);
    }
    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)31089))));
}
