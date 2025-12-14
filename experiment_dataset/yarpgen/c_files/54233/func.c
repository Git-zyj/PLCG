/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54233
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
    var_11 = ((/* implicit */unsigned char) ((short) min((var_1), (((/* implicit */short) var_3)))));
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_6)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 - 2])) & (((/* implicit */int) var_10))));
        var_13 = arr_0 [i_0 + 1];
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0 - 1])) / (((/* implicit */int) arr_1 [i_0 - 1])))) / (((/* implicit */int) ((short) var_6))))))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned char)96))) || (((/* implicit */_Bool) var_5))));
        arr_4 [i_0 - 1] = ((unsigned char) var_2);
    }
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((short) min((var_9), (var_9))))) : ((-(((/* implicit */int) ((short) (unsigned char)248)))))));
}
