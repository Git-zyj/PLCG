/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (min(var_18, var_8));
                var_19 = ((!((((243 - 255) - (((arr_3 [i_0]) ? (arr_0 [i_0] [i_1]) : var_4)))))));
                var_20 |= (((-9223372036854775807 - 1) ? 127 : 1));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_21 = ((((arr_9 [i_2] [i_2]) + (arr_10 [i_2] [11] [4] [i_5]))));
                                var_22 = (max((max(var_17, ((min(var_5, 1))))), ((max((arr_11 [i_2] [i_3] [i_4] [i_3]), ((85 ? (arr_15 [i_4] [i_2] [i_3] [i_5]) : var_10)))))));
                                var_23 -= (max((((-(arr_17 [i_2] [i_6])))), var_6));
                            }
                        }
                    }
                    var_24 = (arr_10 [3] [i_3] [i_4] [i_4]);
                    var_25 *= ((min((min(28483, 255)), (!0))));
                    var_26 = (max((((~(arr_8 [i_4] [i_4] [i_3])))), ((var_10 ? (min(3245698250, 3)) : (arr_17 [i_4] [i_3])))));
                }
            }
        }
    }
    #pragma endscop
}
