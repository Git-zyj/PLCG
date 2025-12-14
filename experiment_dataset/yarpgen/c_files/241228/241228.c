/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = var_1;
                    var_18 = ((((!(var_10 | var_6))) ? (max(var_14, (arr_1 [i_0]))) : (((0 ? ((max((arr_7 [0] [i_0] [i_0] [i_0]), 9))) : ((max(var_11, var_8))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((var_4 << (((min((~var_2), 47)) - 42))));
                    var_19 += (!1);
                    var_20 -= (max(((var_15 ? ((var_10 >> (arr_7 [i_2] [i_1] [i_1] [i_0]))) : ((max((arr_0 [0] [11]), var_1))))), (((910449422180532614 || (var_8 && var_11))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_21 = (min(var_21, (((((max(((max((arr_10 [i_3 - 2] [i_3]), var_12))), ((0 ? (arr_10 [i_3] [i_3 - 2]) : 18242362941188753738))))) ? ((((min(var_15, (arr_11 [i_3])))) ? var_7 : var_8)) : 0)))));
                var_22 = ((((((var_5 || var_8) ? 13248396152983331769 : (((min(var_13, var_13))))))) ? var_13 : (arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
            }
        }
    }
    #pragma endscop
}
