/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = (max((((!(((1 ? 0 : -1511032184)))))), var_8));
    var_21 = (max(var_21, (var_2 & var_7)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((var_17 ? (arr_5 [i_0 + 1] [i_0 + 1]) : -1511032184))) && (-1511032184 & 2048989342)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                arr_15 [i_0] [i_4] [i_2 - 1] [i_3] = (((((((2245977931 ? 1088738578 : 1064128438))) ? (max(2048989342, -1511032172)) : var_1)) * ((max((arr_11 [i_0] [i_3] [i_4 - 1]), ((var_1 ? (arr_10 [i_0]) : (arr_9 [1] [i_1] [1] [i_3] [i_4] [i_3]))))))));
                                arr_16 [i_4] [i_1 - 1] [8] [i_3] [i_4] = ((((((min(1088738578, 938930386)) & -1820115272))) ? (min((max(-1511032151, (arr_14 [i_0] [i_0] [i_3] [i_4]))), (arr_4 [1]))) : (((((arr_12 [i_3] [i_1 + 1]) > -1088738578))))));
                                var_22 |= (!1511032144);
                            }
                            var_23 = (min(var_23, (max(((min((!1088738580), (1511032184 == var_5)))), (max(1, 4035440693))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
