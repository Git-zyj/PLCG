/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246467
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
    var_17 = ((/* implicit */unsigned int) var_16);
    var_18 = ((/* implicit */unsigned char) (short)-4051);
    var_19 = ((/* implicit */unsigned int) (short)4051);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((int) (short)4033));
        var_21 = ((/* implicit */int) ((long long int) arr_1 [15U]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3813012999U)))))) < (min((arr_0 [(_Bool)1] [i_1]), (((/* implicit */unsigned int) (unsigned short)55949))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (_Bool)1))));
        var_24 = ((/* implicit */unsigned short) (-(max((arr_1 [i_1]), (arr_1 [i_1])))));
        var_25 = ((/* implicit */unsigned long long int) min((((unsigned int) -1804659938)), (((/* implicit */unsigned int) (unsigned short)19843))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_26 = arr_7 [i_2];
        var_27 = ((/* implicit */_Bool) ((arr_4 [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (short)-4051)))));
        var_28 |= ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
    }
}
