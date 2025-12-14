/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36624
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (short)(-32767 - 1)))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_10)))))) << (((/* implicit */int) ((((/* implicit */int) ((signed char) var_13))) >= (((/* implicit */int) ((unsigned char) var_4))))))));
    }
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) < (((/* implicit */int) var_15)))) ? (min((((/* implicit */int) ((unsigned char) (signed char)10))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_11))));
    var_19 = ((/* implicit */short) (-(((/* implicit */int) var_16))));
    var_20 = var_2;
}
