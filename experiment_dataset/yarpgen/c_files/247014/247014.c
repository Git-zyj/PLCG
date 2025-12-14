/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = var_10;
    var_21 = ((var_6 || (var_11 > 2428483036661253226)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 -= (max(1028874541699160181, ((-5211 ? (arr_10 [i_0 - 1]) : var_15))));
                                var_23 = (arr_0 [i_0 - 1]);
                                arr_12 [i_0 + 1] [11] [i_2] [i_3] [i_4] [11] = (((((((min(1, var_0))) ? ((48 ? (arr_3 [9]) : (arr_0 [i_0 + 1]))) : (~var_13)))) ? -var_17 : ((((65504 || var_9) != (-32767 - 1))))));
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_4] = (((((4 ? (3729080444116321629 >= 12464192250517352487) : var_18))) > ((var_4 * ((var_17 ? 0 : var_0))))));
                                arr_14 [i_4] = max(((max(var_17, 65517))), -1767737963);
                            }
                        }
                    }
                }
                var_24 = ((((((arr_11 [i_0 + 1] [i_0 + 1] [i_1 - 1]) ? (arr_11 [i_0 - 1] [i_0 - 1] [i_1 - 3]) : (arr_11 [i_0 - 1] [i_0 + 1] [i_1 - 2])))) > var_5));
                var_25 = (((((var_4 ? (arr_11 [i_1 - 3] [i_1] [i_1 - 3]) : var_14))) ? (arr_6 [0] [i_1] [i_1 - 3]) : (arr_11 [i_1] [7] [i_1 - 3])));
            }
        }
    }
    #pragma endscop
}
