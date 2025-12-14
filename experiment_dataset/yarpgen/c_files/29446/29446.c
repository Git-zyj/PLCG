/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min(((max((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_0 + 1] [i_0])))), (min((arr_1 [i_0] [i_0]), (((arr_1 [i_0 + 1] [i_0]) + 4223864536))))));
        arr_3 [i_0] = (min(-1, (((!((((arr_0 [i_0]) ? (arr_1 [i_0 + 1] [i_0]) : var_10))))))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_18 = (max(3296228848, 15));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_19 = ((!((min((arr_15 [i_2 + 1]), 32451)))));
                                arr_17 [i_4] [i_4] [i_3] [i_2] [i_4] = (((((((max((arr_10 [i_1 + 1] [i_2 + 2] [i_3]), (arr_9 [i_5] [i_2 + 3])))) ? 3296228843 : (((arr_9 [i_2 - 1] [i_3]) & var_15))))) ? ((max(71102760, (arr_13 [i_2 + 2] [i_4] [i_3] [i_1 - 1])))) : (((arr_7 [i_1]) / ((((((arr_12 [i_4] [i_4] [i_3] [i_3] [i_3]) + 2147483647)) << (((arr_4 [i_1]) - 4261409588258390709)))))))));
                                var_20 = var_16;
                                var_21 = ((((((4468947782868956868 ? (arr_4 [i_1]) : (arr_4 [i_3])))) ? ((min(var_0, (arr_14 [i_1] [i_1 + 2] [i_2] [i_3] [i_4] [i_5] [i_5])))) : (((!(arr_11 [i_1] [i_1] [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_1] [i_1 + 1] = (((min(((min(var_13, (arr_12 [i_1 + 1] [20] [i_1 - 1] [i_1] [i_1])))), (arr_13 [i_1 + 1] [1] [i_1] [1]))) + (((1 ? 1 : 1)))));
        arr_19 [i_1 - 1] = (((arr_6 [i_1 - 1] [i_1]) ? (((((arr_6 [i_1 - 1] [i_1 - 1]) || (arr_6 [i_1 - 1] [i_1 + 1]))))) : ((~(arr_6 [i_1 - 1] [i_1])))));
    }
    #pragma endscop
}
