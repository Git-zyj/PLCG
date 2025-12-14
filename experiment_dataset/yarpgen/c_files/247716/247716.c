/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((((min((min(var_11, var_2)), ((min(var_8, -6482)))))) ? ((((min(var_5, 16))) & (var_8 == 119))) : ((~(~32767)))));
    var_16 = ((-((-var_3 ? 202 : (((var_2 >> (34837378 - 34837348))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (((((-((-(arr_2 [i_0] [i_0])))))) ? ((min((arr_5 [i_0] [i_1] [i_1]), var_6))) : ((-(arr_2 [i_0] [i_0])))));
                var_18 = (((((var_7 ? (arr_0 [i_1] [i_0]) : var_11))) || (((var_12 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_1]))))));
                var_19 = (min(var_19, (((~24867) ? var_9 : (arr_0 [i_0] [i_0])))));
                var_20 |= ((-(-19411 & -15565)));
            }
        }
    }
    #pragma endscop
}
