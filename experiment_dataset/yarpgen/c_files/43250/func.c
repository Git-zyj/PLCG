/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43250
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
    var_10 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)96))))) ? (((-1110214198) / (-1110214198))) : (1463517722))), (((-2138180132) - (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */int) ((unsigned char) var_2));
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (unsigned char)63))));
        arr_3 [i_0 + 1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [(unsigned char)3]))));
    }
    for (signed char i_1 = 3; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)170))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((signed char) ((int) (unsigned char)63)));
    }
    var_14 = ((/* implicit */signed char) var_6);
}
