/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(min(-1408291069, var_11))));
    var_17 *= (~((-var_3 ? (max(var_10, var_12)) : 7719347205295651789)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = ((~(max((arr_3 [i_0] [i_1] [i_2 - 1]), (arr_4 [i_2 - 4] [0])))));
                    var_19 = (min(var_19, (((~(~7719347205295651810))))));
                    var_20 += (max(((!(!var_0))), ((!(arr_3 [8] [i_2 - 1] [8])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_21 = (min((arr_11 [i_4] [i_4]), var_0));
                                var_22 ^= (min((((~((~(arr_13 [4] [i_4])))))), ((179 ? 4386252577935143099 : 5626))));
                            }
                        }
                    }
                    arr_20 [i_3] [17] [i_5] [i_4] = (max(-1324716817, ((59909 - (arr_16 [i_3] [i_5] [i_5] [i_3] [i_5] [0])))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_23 = (arr_23 [i_3]);
                                var_24 = ((~((~(~18446744073709551606)))));
                                var_25 = (max(var_15, ((((arr_21 [i_8 + 2] [i_9 + 1] [i_5] [i_5]) <= (min(9078647277033496184, (arr_27 [i_3] [i_3] [i_5] [i_3] [8]))))))));
                                var_26 = (~-1);
                            }
                        }
                    }
                    var_27 = 3;
                }
            }
        }
    }
    #pragma endscop
}
