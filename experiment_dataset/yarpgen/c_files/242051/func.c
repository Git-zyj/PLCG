/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242051
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
    var_13 = ((/* implicit */int) ((unsigned char) (unsigned char)225));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)30)) ? ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))))) : ((-(((/* implicit */int) (!((_Bool)0))))))));
    var_15 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_1 [i_0])), (max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (unsigned char)216))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned short)42241))))));
    }
}
