/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((min(-8, (~65535))))));

                for (int i_2 = 1; i_2 < 6;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_1] [i_1] [2] [i_1] = -90;
                    var_22 = (6779058799943237914 && ((min(((min(var_15, (arr_4 [i_1] [i_1] [i_1])))), ((var_16 / (arr_4 [i_1] [i_1 + 2] [i_1])))))));
                }
                for (int i_3 = 1; i_3 < 6;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_1] [i_1] = 4611123068473966592;
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_17 [1] [i_4] [i_0] [i_0] [1] |= 24;
                                arr_18 [i_0] [i_0] [i_1] [0] [i_4 - 2] [i_5] = (min((((!47784) - ((var_13 ? var_0 : 65535)))), ((((((-9223372036854775807 - 1) ? 473447829 : 1152921504606845952)) == ((min(1123659452, (arr_9 [i_5] [i_5] [i_5 + 1])))))))));
                                var_23 += (((((-(arr_5 [i_3] [2] [i_3] [i_3 + 4])))) ? (((((59420 - (arr_6 [2] [2])))) ? (arr_14 [4] [i_3 + 1] [i_3] [i_1 - 1]) : var_15)) : ((min(1, 12)))));
                            }
                        }
                    }
                }
                arr_19 [i_1] = 1;
            }
        }
    }
    #pragma endscop
}
