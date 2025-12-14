/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (186 && 0);
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = ((min(var_1, (~0))));
        arr_5 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        var_13 -= (((arr_1 [13]) ? 186 : (~-32755)));
        var_14 = 1;
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_15 = ((-((~((min(var_10, (arr_12 [i_3]))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((((arr_3 [i_1]) ^ var_8)))));
                                var_17 = (((var_2 ? (((arr_20 [i_4]) * 1)) : (arr_18 [7]))));
                                var_18 = (min((arr_7 [i_4]), ((((((arr_19 [5] [1] [i_2] [0] [8] [5] [5]) ? (arr_0 [i_1]) : var_1)) == (arr_0 [i_1 + 2]))))));
                                arr_21 [i_3] [i_3] = ((~((50137 ? (arr_20 [0]) : (arr_19 [i_5] [i_4] [i_3] [i_3] [2] [1] [i_1])))));
                            }
                        }
                    }
                    arr_22 [i_1] [2] [i_3] |= (arr_8 [i_3]);
                    arr_23 [i_1] [i_3] [i_3] [6] = (~var_4);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_19 = (max(15, var_1));
                                arr_30 [i_3] = min(((min(1, 871438842230431236))), 3548313460423397657);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 |= var_6;
    var_21 = var_5;
    #pragma endscop
}
