/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245710
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
    var_16 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_9))))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (var_8)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned char)118), ((unsigned char)73))))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((unsigned char) min((var_10), ((unsigned char)255)))))));
        var_19 = (unsigned char)249;
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_20 += ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_1 [i_1])))))), (((((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) var_1)))) >> (((((/* implicit */int) var_6)) - (37)))))));
        var_21 &= (unsigned char)0;
        arr_4 [i_1] = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_1]))))), (arr_0 [i_1] [i_1]));
    }
}
