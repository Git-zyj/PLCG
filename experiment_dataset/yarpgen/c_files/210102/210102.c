/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_12);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (((arr_3 [i_0] [i_1] [i_2]) ? (arr_2 [i_2] [i_0] [i_0]) : (arr_2 [i_0] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_2] [i_0] [i_0] [i_2] = (min((arr_5 [8]), (arr_2 [i_0] [i_1] [1])));
                                var_20 = (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]);
                                var_21 = (min(var_21, (((((((10792985330019402101 - (arr_4 [i_1] [i_3] [i_1] [i_0]))))) ? (max((((arr_7 [i_0] [1] [i_2]) ? var_13 : (arr_10 [i_0] [1] [1] [1] [i_4]))), (var_15 < 2728168171))) : (!7653758743690149514))))));
                            }
                        }
                    }
                    var_22 = (max(var_22, ((((((+((((arr_4 [i_0] [i_0] [i_0] [i_0]) < (arr_3 [i_0] [i_1] [1]))))))) <= (arr_1 [i_2] [13]))))));
                    var_23 ^= ((((10792985330019402095 ? -30244 : 13))));
                }
            }
        }
    }
    #pragma endscop
}
