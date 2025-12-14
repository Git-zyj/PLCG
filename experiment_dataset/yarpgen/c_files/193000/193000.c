/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(((2 ? 1 : (!18))), ((-(((15872 >= (arr_4 [i_0] [i_0] [i_1]))))))));
                var_18 = (max(var_18, ((((((3 ? -10 : -32757))) && (((3991788044 ? ((var_3 + (arr_1 [9]))) : ((min(252, 17465)))))))))));
                arr_5 [i_1] [5] [i_0] = ((((((((var_8 ? (arr_4 [i_0] [i_0] [i_1]) : var_11))) ? (((arr_2 [i_1]) ? 1016 : 63)) : (!159)))) ? (((((9223372036854775805 ? var_12 : var_0))) ? ((((arr_3 [i_0] [i_1] [i_0]) >= var_11))) : (206 <= var_2))) : ((-((max((arr_0 [i_0] [i_0]), var_10)))))));
            }
        }
    }
    var_19 = (((((~(min(954952570, 3))))) ? ((((((var_0 ? var_3 : var_12))) ? (((-1 ? var_16 : var_8))) : ((-1 ? 2151970532 : 158))))) : ((0 ? 8 : -6097877421195398329))));
    var_20 = ((-((((min(var_9, var_9))) ^ ((max(var_9, 255)))))));
    var_21 ^= ((-(((((var_10 ? var_0 : var_5))) ? 30 : ((var_9 ? var_1 : var_5))))));
    #pragma endscop
}
