/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_1, ((min(-27108, -var_9)))));
    var_17 = (((((max(var_5, -1))) ? 3136098794989942175 : (!7))));
    var_18 = (var_4 % var_5);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [9] [i_0] [i_1] [i_1] [i_0] [3] = ((-((((max(var_3, (arr_0 [4] [i_1])))) ? ((0 >> (31330 - 31330))) : (arr_7 [i_0] [i_0 - 3] [i_0 - 1])))));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_19 = (min(((-850367801 ? (-2147483647 - 1) : (~var_11))), (((~(((-2147483647 - 1) - -27108)))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_11 [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0 - 2]) ? (min((arr_9 [i_0 - 1] [i_0 - 3] [i_0 - 1] [10]), (arr_13 [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 1] [i_0]))) : (((-(arr_6 [i_3] [i_0]))))));
                                var_20 = ((((min((arr_10 [i_0 - 1]), (arr_11 [i_0 - 2] [i_1] [i_2] [i_2])))) ? var_1 : ((((!(((var_8 - (arr_10 [i_0]))))))))));
                            }
                            var_21 = (((((max(1396559882, var_15)))) ? (min(((((arr_4 [i_0] [12] [i_0]) ? (arr_13 [i_0] [i_0 - 3] [i_0] [i_0 + 1] [i_0] [i_0 - 2]) : var_15))), (arr_1 [i_0]))) : ((((arr_0 [i_0 - 2] [i_0 - 3]) * -var_15)))));
                        }
                    }
                }
                var_22 = (arr_2 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
