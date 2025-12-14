/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = 96;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (-3282633718894512760 | -3565350282023436908);
                                arr_14 [i_3] [i_4] [i_2] [i_2] [12] [i_1] [i_3] = (((17962862378086706189 + var_14) || (!2044)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] = (((((var_14 >> (3565350282023436898 - 3565350282023436897)))) ? (arr_16 [14] [i_2 + 2] [i_5 - 2] [i_6 + 1]) : 12));
                                arr_22 [8] [8] [i_2] [i_2] [i_2] [4] [i_2 - 1] = (((arr_2 [i_2 + 4] [i_2 - 1]) - ((((var_10 && (arr_0 [i_0])))))));
                                var_21 = (((arr_19 [i_5] [i_6 - 1] [i_5] [i_5 - 1] [i_1]) || ((!(-32767 - 1)))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_22 = (var_17 + (arr_5 [i_0] [i_0] [i_2]));
                        var_23 = ((arr_16 [i_0] [i_1] [i_2 + 2] [i_7]) ? (~11208) : (((!(arr_7 [i_0] [i_1] [i_2] [i_7])))));
                    }
                }
            }
        }
    }
    var_24 = var_10;
    #pragma endscop
}
