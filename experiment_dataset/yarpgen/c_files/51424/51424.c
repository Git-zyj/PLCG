/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_21 = -670395609;
                    var_22 = (max(var_22, ((((!0) ? ((var_11 ? 18446744073709551615 : var_6)) : (arr_2 [i_0] [i_0] [i_0]))))));
                }
                arr_7 [2] [i_1] = ((!(((!0) || (arr_3 [i_0])))));
                var_23 = (max(((~(arr_4 [i_0] [i_0] [i_0]))), (((arr_4 [i_1] [i_1] [i_1]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_1] [i_0])))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_3] [i_4] [i_0] = ((-1003307192 ? (arr_4 [i_0] [i_1] [i_3]) : (((55099 / 18446744073709551603) ? (var_7 * var_17) : ((max(var_5, var_18)))))));
                            arr_15 [4] [i_4] [11] = (min((((arr_5 [i_4] [i_1] [i_0]) ? ((10096251447082564662 ? 18446744073709551615 : 1)) : (((0 ? 13174 : var_11))))), -2593501343));
                            var_24 = (!-var_10);
                        }
                    }
                }
            }
        }
    }
    var_25 = var_10;
    #pragma endscop
}
