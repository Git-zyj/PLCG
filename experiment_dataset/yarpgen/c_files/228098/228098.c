/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(((((3 == var_10) == (!var_8)))), (((var_12 / 1) / (((1103953012 ? var_14 : 0))))));
    var_20 = var_0;
    var_21 = ((-((-((var_8 ? -16 : var_17))))));
    var_22 = ((-60 ? -1099511627775 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1] = (arr_2 [i_0 - 2] [i_1] [i_0]);
                arr_6 [i_1] [i_1] = ((2013075617655743455 ? -1485951672 : (arr_2 [i_0 - 3] [i_0 - 1] [i_0 + 1])));
                var_23 = (((-1 ? ((1 ? var_11 : (arr_4 [i_1] [i_0] [1])) : ((-(arr_0 [4])))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_13 [5] [i_1] [i_2 - 1] = (((((-(arr_3 [i_2 - 1] [i_0 - 2] [i_0 - 1])))) ? ((-121 ? (min((arr_4 [i_1] [i_1] [i_1]), (arr_3 [0] [5] [i_2]))) : var_0)) : 40555));
                            var_24 -= ((-((1 * (((arr_1 [i_0]) / -7043))))));
                        }
                    }
                }
                arr_14 [i_0] [8] [i_1] |= (arr_4 [8] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
