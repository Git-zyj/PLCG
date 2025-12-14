/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237426
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
    var_19 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-32735)))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) var_6);
        var_21 *= ((/* implicit */_Bool) var_2);
        var_22 = ((/* implicit */short) var_11);
    }
    for (signed char i_1 = 2; i_1 < 14; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1 - 2] [i_1] = ((/* implicit */signed char) var_1);
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_1)), ((signed char)-1)))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) var_2))));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */int) var_15))));
}
