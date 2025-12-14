/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((-(max((!var_7), (max(var_13, -197211042))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 &= ((7021744262468950820 ? (arr_2 [i_0]) : 1));
                                arr_13 [i_0] [i_1] [i_3] = ((!((((arr_9 [i_1 + 3] [i_1 + 3] [i_3 - 1] [13] [i_3 + 1] [i_1]) ? (arr_10 [i_0] [i_0] [i_1] [i_1]) : (arr_2 [0]))))));
                                arr_14 [i_0] [i_0] [i_0] [7] [i_1] [5] = ((arr_5 [i_2] [i_1] [i_4]) ? ((67108863 ? (!59700) : ((var_3 ? var_12 : 15021)))) : (arr_8 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_4]));
                                var_18 = (min(var_18, var_5));
                            }
                        }
                    }
                }
                var_19 = (((arr_6 [i_1] [i_1] [i_0] [i_1 - 1]) ? (max(-2147483634, -589605468)) : (arr_6 [i_1] [i_1] [i_1] [i_1 + 3])));
                arr_15 [i_0] [i_0] [i_1] = ((((((arr_0 [i_1 + 4]) ? 1803919146105205976 : (arr_1 [i_1 + 4] [i_1 + 2])))) ? (((arr_0 [i_1 + 2]) ? (arr_0 [i_1 + 4]) : (arr_0 [i_1 - 1]))) : (max(var_13, 1807660947))));
                arr_16 [i_1] = (((var_1 >= var_13) ? 976946258 : ((((arr_1 [i_1 - 1] [9]) | (arr_1 [i_1 + 3] [i_1 + 3]))))));
                var_20 = var_6;
            }
        }
    }
    #pragma endscop
}
