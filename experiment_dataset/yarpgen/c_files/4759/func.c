/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4759
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0] [i_0]))))))));
        var_12 = arr_0 [i_0] [i_0];
    }
    var_13 = ((/* implicit */unsigned short) ((unsigned int) (-(((((/* implicit */_Bool) (signed char)104)) ? (-611911963) : (((/* implicit */int) (unsigned char)153)))))));
    var_14 = (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (unsigned char)45)) * (((/* implicit */int) var_8)))))));
}
