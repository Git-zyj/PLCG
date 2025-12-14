/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 + (~var_18)));
    var_20 |= (max(var_0, ((((min(-17, 1054548159)) / 18)))));
    var_21 = ((var_0 && (((((min(32620, 16))) ? var_6 : -17)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_22 = (!(arr_8 [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1]));
                            var_23 = -16;
                            arr_12 [i_0 + 1] [i_0] = (((~var_2) ? ((((arr_4 [i_3 - 1] [i_3 + 1]) ? (arr_4 [i_3 + 1] [i_3 - 1]) : (arr_4 [i_3 - 1] [i_3 - 1])))) : ((((max(-17, (arr_3 [6])))) ? -var_9 : (min(var_5, var_6))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_24 = (((((arr_9 [i_0 - 1] [20] [i_0 - 1] [i_5 - 3] [i_6 - 1]) || ((max((arr_3 [17]), (arr_20 [6] [i_1])))))) ? ((((var_13 > (arr_7 [i_0] [i_0] [i_0 + 2] [i_0]))))) : var_16));
                                var_25 = var_10;
                                arr_21 [i_5] [i_5 + 3] [i_5] = ((!((max(((-(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))), (arr_19 [i_4] [i_1]))))));
                                arr_22 [i_0 - 1] [i_5] [i_1] [i_4] [i_5 + 3] [i_5] = 8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
