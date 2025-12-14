/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min(((min(var_13, 698645040))), var_16)), (((!(!24784))))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_18 *= ((arr_3 [i_0 - 3] [i_1]) ? ((-(40752 && var_5))) : var_11);

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_6 [i_0] [2] [i_2] [i_0 - 3] = (!-33547);
                var_19 = min(1, (min(40752, 32767)));
            }
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] = (max((min((arr_9 [i_5 + 1] [16] [i_0] [i_0]), (arr_9 [i_5 + 1] [i_4 - 1] [i_3 + 1] [i_0 - 1]))), 140));
                            var_20 = (((-(32767 || 40752))));
                        }
                    }
                }
                arr_19 [i_0] [i_0 - 1] [i_0] [i_0] = (!(((arr_16 [i_1 - 1]) >= 122)));
                arr_20 [i_0] [13] [i_0] = (((min((min(var_10, (arr_16 [10]))), 116))) ? (((((24763 > 0) < (((arr_7 [i_0] [i_1] [i_3]) & (arr_17 [i_0] [i_3] [i_0] [i_0] [i_0]))))))) : ((~(209 / var_15))));
            }
            var_21 = ((9079256848778919936 ? 1373438309 : 33548));
            arr_21 [i_0] = ((!(41745 < -3679256636436864785)));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_30 [4] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(33547, (((((min(-41, 67))) && 40752)))));
                            arr_31 [i_0 - 2] [i_0 - 2] [i_0] [i_7] [i_8] = var_8;
                            var_22 = ((((-(!1))) / -112));
                            arr_32 [i_0] [i_1] [18] [i_1] = (max((var_6 || 32766), ((-24 ? 2753 : ((14 ? 1100714556 : 17013897257950346634))))));
                        }
                    }
                }
            }
        }
        arr_33 [i_0] [i_0] = ((1432846815759204969 ? 1953774441 : 0));
        arr_34 [i_0] [i_0] = (((((arr_22 [i_0]) / var_9)) >= ((min((arr_22 [i_0]), (arr_22 [i_0]))))));
        arr_35 [i_0] = (((~1) ? (((-1953774441 >= var_7) ? ((var_4 ? (arr_28 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) : var_11)) : var_11)) : ((((245 < (!var_4)))))));
    }
    var_23 = (min(var_23, var_3));
    var_24 = var_13;
    #pragma endscop
}
