/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212041
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
    var_18 = ((/* implicit */short) var_12);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) (signed char)110);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_3))))) < (2472851164U)));
        arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_17))));
        arr_5 [(signed char)12] [(signed char)12] &= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (-1352150477)));
        arr_6 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
        arr_10 [i_1] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    }
}
