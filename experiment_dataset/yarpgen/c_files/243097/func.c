/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243097
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
    var_11 = (-((-(((/* implicit */int) var_1)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_10;
        var_12 = ((/* implicit */_Bool) (+(var_8)));
        var_13 |= ((/* implicit */_Bool) var_9);
        var_14 ^= (+(((/* implicit */int) (_Bool)1)));
        var_15 &= ((/* implicit */_Bool) (~((~(var_8)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */int) var_1);
        arr_6 [13] [i_1] = ((/* implicit */_Bool) (-(var_8)));
        var_17 = var_2;
        arr_7 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_18 ^= (~(((/* implicit */int) var_1)));
        var_19 -= ((/* implicit */_Bool) var_8);
        var_20 -= (-(((/* implicit */int) var_4)));
        arr_10 [i_2] [i_2] = (+(((/* implicit */int) var_0)));
    }
}
