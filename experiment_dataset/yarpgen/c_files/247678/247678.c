/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (((min(var_16, (var_13 <= var_7))) > (((((var_8 ? 917504 : var_1)) != ((-1 ? var_9 : var_8)))))));
    var_20 = ((max(var_16, (~var_4))) ^ var_17);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_1] = ((!(arr_7 [i_0] [i_1] [i_0] [i_0])));
                    var_21 = (((arr_6 [i_0] [i_0 - 2] [i_0 - 2] [i_2]) ? ((~(arr_6 [i_0] [i_0 - 2] [i_0 - 2] [i_0]))) : ((917504 ? -917500 : 53615))));
                    var_22 = (~-1021847285);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [1] [4] [i_2] [i_3] [i_4] = ((arr_13 [i_0 - 3] [i_0] [i_0] [i_0 + 1] [i_0 - 4]) <= (((((var_14 ? var_4 : 15659))) ? (arr_12 [i_0] [i_0] [i_0 - 4] [i_0 - 4] [i_0 - 4]) : (((max((arr_7 [i_0] [i_1] [3] [i_4]), var_10)))))));
                                arr_17 [i_4] [i_4] = (((arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4]) / 689284700));
                                var_23 = (((arr_11 [i_0] [i_1] [i_2] [i_3] [i_0]) ? (((min(127, var_2)))) : (arr_2 [i_0])));
                                arr_18 [i_2] = 917499;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 7;i_6 += 1)
                        {
                            {
                                var_24 -= ((max(var_5, ((var_4 || (arr_3 [i_0] [i_1]))))) ? var_13 : ((max(-917514, (arr_22 [i_0 - 3] [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_6 - 1] [i_6] [i_6])))));
                                arr_25 [i_0] [i_0] [i_2] [i_2] [i_0] [3] = (arr_1 [i_0 - 1]);
                                arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [1] = ((-917499 ? ((-1 ? (arr_1 [i_0 - 4]) : ((-(arr_19 [3] [i_0 - 4] [1] [i_0 - 4]))))) : var_3));
                                var_25 += (((!-1) < (min((arr_20 [1] [i_1] [i_2] [5]), var_6))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
