/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min((((var_15 >> (var_5 + 142)))), ((64958 ? var_11 : var_4)))));
    var_18 = (min(var_18, (((var_4 & (max(var_3, (min(var_6, var_0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = (min((6170261513537638365 > 0), (arr_0 [i_0])));
                    var_20 *= ((((min(0, var_3))) ? (min((max((arr_1 [24] [5]), var_6)), var_7)) : var_12));
                    var_21 = (arr_2 [i_0] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
