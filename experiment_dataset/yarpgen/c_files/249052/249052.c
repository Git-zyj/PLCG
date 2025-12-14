/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (((min((arr_3 [i_0] [i_0 - 1] [i_0 - 1]), (arr_3 [i_0] [i_0 - 1] [i_0]))) ? var_8 : ((((arr_2 [i_0 - 1] [i_0 - 1] [i_0]) ? (arr_2 [i_0 - 1] [i_0 - 1] [i_0]) : (arr_2 [i_0 - 1] [i_0 - 1] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 &= (max((arr_6 [i_0] [i_0] [i_0 - 1] [i_2] [i_2] [i_3 + 1]), (((((arr_4 [i_3] [i_1] [i_0]) ? 17347635012102423115 : (arr_6 [8] [i_1] [i_1] [i_1] [i_1] [i_1]))) * (((min((arr_3 [i_1] [i_2] [2]), (arr_0 [i_1])))))))));
                            var_16 = min(((((max((arr_2 [i_0 - 1] [i_1] [i_2]), (arr_5 [i_0] [i_0 - 1] [i_0])))) < (min((arr_2 [i_0] [i_1] [i_2]), (arr_8 [i_0] [i_1] [i_2] [i_2]))))), (arr_3 [i_0] [i_0] [i_0]));
                            var_17 = (max(var_17, 11205359266340414506));
                            arr_9 [i_0] [i_0] [i_0] [18] [i_0] = ((!((var_7 > (((arr_6 [i_3] [i_0 - 1] [i_2] [i_1] [i_1] [i_0 - 1]) ? var_2 : var_1))))));
                        }
                    }
                }
                var_18 = var_7;
            }
        }
    }
    var_19 &= (min(var_1, ((var_0 ? var_3 : (var_13 != var_1)))));
    var_20 = ((((var_7 ? 11205359266340414524 : var_2)) != (((((7241384807369137091 << (11205359266340414506 - 11205359266340414445))))))));
    #pragma endscop
}
