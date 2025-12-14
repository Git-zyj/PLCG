/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!-519258619);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [0] [i_2 - 2] [i_3] [i_0] [i_1] = ((((+((var_6 ? (arr_9 [10] [i_1] [16] [i_3]) : 1)))) < ((((!(arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 2])))))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_20 = (((((((3880136690 ? var_10 : var_11)) + (-67 - 114)))) == 18446744073709551605));
                                arr_14 [i_0] [18] [18] [i_3] [i_4] = (arr_12 [i_0] [1] [i_2 + 1] [i_3] [1]);
                                var_21 += ((((18393 ? (!var_2) : var_15)) != 42280));
                                arr_15 [i_0] = -var_4;
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_22 = ((!((((((-2 <= (arr_16 [1] [6] [i_2 + 1] [6] [0])))) << (-19219 + 19237))))));
                                var_23 = var_12;
                            }
                            arr_19 [i_2 - 1] [i_2 - 1] [i_1] = arr_10 [i_0] [i_0] [i_2] [i_3] [i_3] [i_2];
                        }
                    }
                }
                var_24 |= (93 + var_18);
            }
        }
    }
    var_25 = ((((var_11 ? ((2441674625886656647 ? 17 : -2249)) : ((var_13 ? 250 : var_11)))) == -45));
    var_26 -= var_0;
    #pragma endscop
}
