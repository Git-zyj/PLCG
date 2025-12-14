/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (((min(-2843, var_12)) * (-32761 * 15509)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, var_7));
                                arr_14 [i_0] [2] [i_2] [i_3] [2] = (min((((((min(var_11, var_13)))) + 7115154429142017362)), ((((7115154429142017351 > 11331589644567534236) > var_15)))));
                            }
                        }
                    }
                    var_19 = ((((((((arr_7 [i_0] [i_0]) & var_15)) > (arr_12 [i_0] [i_1 + 1])))) * (arr_3 [i_0 - 2] [i_0] [i_0])));
                    var_20 -= ((!(((((((arr_3 [i_0] [i_0] [i_0]) << (2406973563991999838 - 2406973563991999838)))) ? (((arr_7 [i_0 - 2] [i_0 - 2]) ? (arr_11 [i_0]) : (arr_12 [9] [i_1]))) : (((max(var_13, var_6)))))))));
                }
            }
        }
    }
    #pragma endscop
}
