/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((!47193), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 -= ((-1 > (min((~var_2), 5902814512534460320))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [i_2] [i_0] = (1 <= 2542812932744763454);
                            arr_13 [i_3] [i_2] [i_2] [i_2] [i_0] = ((((((max(var_9, var_7))) ? var_3 : (-9 || 65535))) < (arr_3 [12])));
                            arr_14 [i_2] [i_1] [i_2 - 1] = (arr_4 [i_0]);

                            for (int i_4 = 1; i_4 < 19;i_4 += 1)
                            {
                                var_14 = (min(var_14, (arr_6 [i_2])));
                                arr_19 [i_2] [i_3] [i_3] [i_2 - 1] [i_2] [i_1] [i_2] = (arr_7 [i_0] [i_0] [i_2]);
                                var_15 -= (arr_10 [i_1] [i_2]);
                                arr_20 [i_3] [i_2] [i_2] [i_3] [i_4] = (min(((min((var_5 && -20883), (!-32351)))), var_9));
                            }
                            for (int i_5 = 1; i_5 < 20;i_5 += 1)
                            {
                                var_16 = (max(var_16, (arr_11 [i_1] [i_1])));
                                arr_23 [i_0] [i_1] [i_1] [i_1] [i_3] [i_5] &= -279223176896970752;
                                arr_24 [i_2] = ((var_6 < (((!(arr_3 [i_2 + 1]))))));
                            }
                        }
                    }
                }
                arr_25 [13] = (41 != -1);
            }
        }
    }
    #pragma endscop
}
