/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = (~-4403562101085468846);
                arr_6 [i_0 + 3] [6] [i_1 - 1] |= (((arr_4 [4] [i_1 - 1] [i_1 - 1]) ? ((((((var_4 ? (arr_1 [i_0 - 1] [i_0]) : (arr_4 [6] [i_1 - 1] [i_1]))) != (!var_13))))) : ((((((arr_0 [12] [i_1 - 1]) ? var_16 : var_16))) ? (max(var_4, 4403562101085468822)) : var_9))));
                var_19 = (max(var_19, var_1));
                arr_7 [i_0] [i_1] [i_0] = (((arr_3 [i_1 - 1] [i_0]) ? var_0 : (((((4645799759912328588 * (-32767 - 1)))) ? var_15 : (var_5 & 4403562101085468865)))));
            }
        }
    }
    var_20 = var_0;
    var_21 = (((~699259579) ? var_3 : (((((var_16 ? var_12 : 63))) ? var_8 : var_0))));
    var_22 = var_11;
    var_23 = (max(var_14, (((!180) ? 50331648 : var_18))));
    #pragma endscop
}
