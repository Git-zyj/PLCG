/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44900
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
    var_12 = ((/* implicit */signed char) 2147483647);
    var_13 &= ((/* implicit */signed char) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) var_2)));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1 - 2] [i_1 + 2]))));
        arr_9 [i_1] [i_1] &= ((/* implicit */_Bool) ((signed char) (signed char)102));
    }
}
