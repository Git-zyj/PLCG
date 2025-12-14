/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209752
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
    var_17 = ((/* implicit */int) ((unsigned int) (~(3542970870U))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_19 = ((/* implicit */_Bool) max((((((/* implicit */int) var_6)) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (0) : (2003053289))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))) < (2355868739U)))) : ((+(((/* implicit */int) (signed char)(-127 - 1)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_1]);
        var_20 += ((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */short) arr_0 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */int) 4294967295U);
        arr_10 [(signed char)2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3889583174U)) ? (1U) : (3295995545U)))) ? (((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))))) <= (max((((/* implicit */unsigned int) arr_1 [i_2])), (min((((/* implicit */unsigned int) arr_1 [11U])), (arr_3 [i_2])))))));
        arr_11 [i_2] = ((/* implicit */signed char) ((arr_6 [i_2] [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2])))));
        var_21 = ((/* implicit */int) 1430470272U);
        var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 1479195031U))));
    }
}
