/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [1] [i_2] [i_3] |= 487760830;
                                var_19 = (!487760806);
                                var_20 = (((var_14 * 216) == (arr_13 [i_4 - 1] [i_1] [i_2] [i_3] [i_4 - 2] [i_2])));
                            }
                        }
                    }
                }
                var_21 = (min(var_21, 487760826));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_21 [i_7] [i_6] [i_1] [i_1] [i_0] = ((((896 ? 59047 : 24))) ? 0 : (((110545333 == var_2) ? var_9 : var_8)));
                                var_22 = (var_15 / var_3);
                                var_23 = 0;
                            }
                        }
                    }
                }
                arr_22 [12] [i_1] = min((min((((arr_12 [i_1] [i_1] [i_1] [i_1] [i_0]) ? -77388502 : (arr_3 [i_1]))), (((var_4 <= (arr_16 [17] [i_0] [i_1] [i_1])))))), (15011 | 41));
            }
        }
    }
    var_24 = (var_12 / (((var_13 - var_16) ? -13 : ((-1290013125 ? -487760812 : var_16)))));
    #pragma endscop
}
