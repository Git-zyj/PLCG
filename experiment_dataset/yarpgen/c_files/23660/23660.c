/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = (((min(17301359706168080572, -1469714991)) <= (((-(-29910 + var_1))))));
    var_16 = ((2538642851 >= ((-((184883671 ? 18446744073709551615 : -474092850))))));
    var_17 = (((!(((var_2 ? var_6 : var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] = ((((!(!var_7))) ? (max((arr_0 [i_1 + 1]), (arr_12 [15] [i_1 - 1] [i_1 - 2] [i_1]))) : (((min(var_3, var_6))))));
                            arr_14 [i_0] [16] [i_0] = (max((-474092850 * 10637122988222241268), ((min(var_3, (arr_5 [i_0] [i_1] [i_2]))))));
                            arr_15 [i_0] [i_0] = 474092849;
                            arr_16 [i_0] [i_2] [i_1 - 2] [i_0] = -18561;
                        }
                    }
                }
                arr_17 [i_0] = (((((arr_10 [i_1 + 2] [i_1 - 2] [i_1] [i_1 + 1]) && 62407)) ? (arr_4 [i_0] [7]) : 15));
            }
        }
    }
    #pragma endscop
}
