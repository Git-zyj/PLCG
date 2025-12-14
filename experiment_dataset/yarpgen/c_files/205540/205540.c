/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = (max(var_15, var_12));
    var_16 = (var_9 < ((-8015 & ((min(var_0, 41))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((arr_2 [16]) / (((((-168827692222598774 + 222) <= (arr_1 [11]))))))))));
                arr_6 [i_0] [i_1] = (((((var_10 ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((((arr_4 [i_0]) >= var_9)) ? 3410400833 : (!-144115188075855872))) : -25836));
                arr_7 [i_0] [i_0] = ((-(((arr_0 [i_0]) ? var_5 : ((min(1, var_5)))))));
                var_18 = (arr_1 [i_1]);
            }
        }
    }
    var_19 = (((((var_0 ? var_0 : var_4))) & (!var_4)));
    #pragma endscop
}
