/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((var_7 && var_17), 6);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = 23023;

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] [i_0] = 252;
                    var_20 *= var_9;
                    arr_9 [i_0 + 1] [i_1] = (min(((min((min(0, var_2)), (!3)))), (arr_3 [i_1 - 1] [i_2 - 1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_2] [i_1] = (((((45 ? var_3 : var_16))) ? 433569912 : 243810002));
                                var_21 = (max((min(-22, 5777341088293017587)), ((min(48, (arr_5 [i_1 - 2] [i_1]))))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] [i_1] [i_1] = 252;
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    var_22 = ((((3170011190 > (((255 ? var_13 : 161))))) ? 4503599627370464 : var_1));
                    var_23 = (arr_0 [9] [i_0 - 1]);
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_22 [i_1] [i_1 + 1] [10] = (!14);
                    var_24 = ((231 != (-25059 * 18446744073709551615)));
                }
            }
        }
    }
    var_25 -= (min(24, -25059));
    var_26 = var_13;
    #pragma endscop
}
