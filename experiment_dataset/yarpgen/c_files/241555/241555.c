/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_17;
    var_21 = (max(var_21, 5687604237972009073));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((-((max((arr_1 [i_0 + 3]), (arr_1 [i_0 - 1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = (((max(-1250564350, 8013397321440822471)) != (((-(min(0, (arr_13 [i_2] [i_1] [i_1]))))))));
                                var_22 = (min(var_22, ((((((-((~(arr_12 [i_0] [i_1] [i_2] [i_4] [i_0 - 1])))))) ? (max(1, 12759139835737542543)) : (~12759139835737542544))))));
                                var_23 = (max(var_23, 12228495739333996101));
                                var_24 = (max(var_24, (arr_9 [i_0 + 1] [i_0 + 3])));
                                var_25 = (min(var_25, var_11));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_5] [8] [i_0] [i_5] = (((arr_16 [i_6] [i_1] [i_5]) && 127));
                            arr_22 [i_0] [i_0] [10] [11] = 11970;
                        }
                    }
                }
                var_26 = (max(12759139835737542543, 63));
            }
        }
    }
    #pragma endscop
}
