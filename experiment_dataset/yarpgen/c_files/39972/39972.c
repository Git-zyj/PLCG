/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_20 -= 3327220168;
                            var_21 = ((~((((~(arr_5 [i_0] [i_1]))) ^ var_3))));
                            var_22 = 1;
                            var_23 = ((var_8 ? (min(1705406806, 1705406806)) : ((((arr_8 [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_3 + 1]) ? var_8 : var_16)))));
                        }
                    }
                }
                arr_9 [i_0] [i_0] = (min((~var_4), 1));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] = (((((2589560510 ? 1705406815 : (-2147483647 - 1)))) ? ((30849 ? (1705406817 / 1705406815) : (arr_12 [i_0] [i_0] [i_4] [i_0]))) : ((min(var_17, ((var_8 ? var_19 : (arr_12 [i_0] [i_0] [3] [i_5]))))))));
                            var_24 = var_10;
                            var_25 = (max((arr_14 [i_0] [i_1] [i_4] [i_5]), (max(var_3, (arr_6 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_26 = ((~((var_14 * (!var_1)))));
    var_27 = var_3;
    var_28 = (((((var_0 ? var_18 : var_7))) ? var_10 : var_19));
    #pragma endscop
}
