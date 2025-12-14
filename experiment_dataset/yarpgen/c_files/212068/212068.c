/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 += (arr_6 [i_0] [i_1] [i_1]);
                    arr_8 [i_0] [i_0] = ((-(arr_1 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 = (arr_2 [5] [i_1] [i_3]);
                                arr_15 [4] [i_1] [i_0] = arr_5 [i_0] [19] [i_0] [i_0];
                                var_22 = (((((113 ? -95 : -var_6))) != var_3));
                            }
                        }
                    }
                    var_23 = (min(var_23, (((((~(arr_7 [i_1] [i_1]))) ^ ((~(arr_12 [i_0] [i_1] [i_2] [i_1] [14] [16] [i_2]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_24 = ((((min((arr_16 [i_5 - 1] [i_5 + 2]), (arr_23 [i_5 + 1] [i_5 + 2])))) ? ((min((arr_23 [i_5 - 1] [i_5 + 1]), (arr_23 [i_5 - 1] [i_5 - 1])))) : ((-7 ? (arr_16 [i_5] [i_5 + 1]) : 125))));
                var_25 = (-116 ? ((((((~(arr_7 [i_5 + 2] [i_6]))) == 7)))) : (min((arr_10 [i_5 + 1] [i_6] [i_6] [i_5]), (arr_22 [i_5 + 2] [i_5 + 1]))));
                var_26 += arr_5 [i_5 - 1] [i_6] [i_6] [i_6];
            }
        }
    }
    #pragma endscop
}
