/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((var_18 <= (-4727022054596710927 != var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = arr_4 [i_0] [i_0];
                                arr_14 [i_2] [i_0] [i_4] = ((((!-112) ? (((var_10 && (arr_3 [i_1] [i_1])))) : -26486)));
                                var_21 = (((arr_3 [i_2] [i_4]) ? 14638481585394068721 : (((~(((arr_2 [i_4]) ? var_7 : -4727022054596710927)))))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_17 [i_0] [i_1] [i_0] = (((arr_11 [i_5] [i_0] [i_1] [i_1] [i_0] [i_0]) == -4727022054596710927));
                    var_22 = (max(var_22, var_15));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_1] [i_1] [i_1] [i_7] [i_0] = (arr_5 [i_7] [i_1]);
                                var_23 = (min(var_23, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
                arr_24 [8] [i_0] = var_5;
            }
        }
    }
    #pragma endscop
}
