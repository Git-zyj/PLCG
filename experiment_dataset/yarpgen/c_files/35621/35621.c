/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= max(((((~var_7) <= (min(3997979371, 296987925))))), ((-var_4 ? (!var_5) : (1 && 296987925))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [1] [i_1] = (min((var_3 != 4294967295), ((((((arr_2 [i_0]) ? var_3 : var_1))) ? (var_0 > 2059659977) : 0))));
                    arr_9 [i_0] [i_0] [i_2] = 9;
                    arr_10 [i_2] = min(((-(~var_8))), ((~(arr_5 [7] [i_1]))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_11 = max(((((0 ? 1 : 1)))), ((-(((arr_4 [4] [i_0]) ? (arr_3 [10] [i_1] [i_1]) : var_3)))));
                    var_12 = -1;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_1] [i_4] [i_0] = ((((-(arr_6 [i_4] [i_4 - 1] [i_4 - 1] [i_4])))) ? ((min(1, (arr_6 [i_4] [10] [i_4] [i_4])))) : -1214016249);
                                var_13 = -1;
                            }
                        }
                    }
                    arr_20 [i_1] [i_1] [i_0] = ((arr_0 [i_1]) / ((-(1 * 1))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_14 = (2034021632 >= (min(-2034021633, -1)));
                            var_15 = ((((3997979389 > (arr_13 [i_0] [9] [9])))) ^ (arr_11 [i_0] [i_0]));
                        }
                    }
                }
            }
        }
    }
    var_16 &= var_1;
    var_17 = (((max(((var_3 ? var_3 : var_2)), var_7)) + var_3));
    var_18 = (max((min((min(1, 1144351155)), (2986056305 <= 1220915565))), var_7));
    #pragma endscop
}
