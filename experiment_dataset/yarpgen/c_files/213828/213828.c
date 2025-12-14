/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_16 *= ((+(((var_10 || var_5) ? 3060638505 : (max(var_1, var_2))))));
                var_17 = min((max(1852106855, 24)), 62914560);

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_18 = (min(var_18, 0));
                    var_19 = (max(((-(arr_2 [i_2]))), (((~(max((arr_1 [i_0] [i_2 - 1]), 723140549)))))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_20 = ((((((arr_2 [i_1]) != 45)) ? (max((arr_4 [i_0] [i_0] [i_0]), 4026676569)) : (min((arr_6 [i_0] [i_0] [i_0]), (arr_1 [i_0 - 1] [i_1]))))));
                    var_21 = (arr_4 [i_3] [i_1] [i_0 + 3]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_22 = ((((arr_12 [i_1 - 1] [i_0]) && (arr_11 [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_4 + 2]))));
                                var_23 = (min(447986610592453232, 18446744073709551598));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    var_24 = (((var_1 ? ((1000586360 ? var_0 : var_8)) : ((-(arr_6 [i_0] [i_0] [i_6]))))));
                    var_25 = (((min(var_3, 121))));
                }
            }
        }
    }
    var_26 = (((((min(var_1, var_10))) ? var_7 : var_9)));
    #pragma endscop
}
