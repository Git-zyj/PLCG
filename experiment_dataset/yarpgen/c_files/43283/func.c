/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43283
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
    var_14 = ((/* implicit */long long int) min((var_6), (((/* implicit */unsigned short) (signed char)-81))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) var_13);
        var_16 = ((/* implicit */long long int) ((unsigned short) min((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) var_3)))));
        arr_3 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)111)) - (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((unsigned short) (signed char)(-127 - 1)));
        arr_6 [i_1] |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1]))));
        var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)86))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1]))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_20 -= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65533))));
        arr_10 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -2583491382405782423LL))));
    }
}
