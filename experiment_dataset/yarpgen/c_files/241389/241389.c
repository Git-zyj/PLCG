/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((-(!var_17)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] = (min((((!var_13) ? var_7 : (((min(var_14, -70)))))), (arr_0 [i_0])));
                            arr_13 [i_2] [i_1] [i_2] [i_2] [i_3] [i_2] = (~(min(var_3, (arr_10 [i_2] [i_1] [i_2 + 1] [i_3]))));
                            var_20 = (max(var_20, var_5));
                        }
                    }
                }
                var_21 = (min(var_21, (((~(arr_7 [i_1] [i_0]))))));
                arr_14 [i_0] [i_1] = ((var_7 ? (arr_0 [i_1]) : ((((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [i_0]))))));
                arr_15 [i_1] = ((((max(var_2, -0))) ? ((-((min(var_4, var_14))))) : 1));
            }
        }
    }
    var_22 = (max(var_22, ((((((1016840353 ? var_18 : 4294967294))) ? ((max(var_4, var_14))) : -var_1)))));
    #pragma endscop
}
