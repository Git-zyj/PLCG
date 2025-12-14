/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214968
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) & (((((/* implicit */_Bool) (unsigned short)2826)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))) % (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) arr_2 [i_0 - 1]))))));
        var_11 = ((/* implicit */signed char) (_Bool)1);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_12 -= ((/* implicit */_Bool) (signed char)69);
        var_13 = ((/* implicit */signed char) (unsigned short)10818);
    }
    var_14 = ((/* implicit */signed char) var_0);
    var_15 = ((/* implicit */_Bool) max((var_7), (var_6)));
}
