/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 4294967289));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = (arr_3 [i_0 - 1] [i_0 - 1]);
                                var_22 &= (min(var_19, (arr_10 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4])));
                                var_23 = (((((((((arr_12 [i_0 + 1] [i_1] [i_2 - 1] [i_3] [5]) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) : (arr_8 [i_1]))) + 2147483647)) << (((((-27782 + 2147483647) >> (var_15 - 2253124545))) - 2097124)))) | ((((((arr_12 [i_1] [i_1] [i_2] [i_3] [i_4]) ? (arr_12 [i_4] [i_1] [1] [3] [i_4]) : var_18))) ? 86 : (arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_2 + 1] [i_0 - 1])))));
                                arr_14 [i_0] [i_1] [i_2] [10] [i_4] = ((111 ? 18345 : (arr_0 [i_1] [1])));
                            }
                        }
                    }
                    var_24 |= (min((((((((arr_11 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_2]) == (arr_1 [i_0 + 1])))) % (arr_5 [i_2] [i_2 + 2] [i_2])))), (max(var_18, 49))));
                    var_25 = (((0 % 4807430904659771622) ? 2218986715 : (arr_3 [i_0] [i_0 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
