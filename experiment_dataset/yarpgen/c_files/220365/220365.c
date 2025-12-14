/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_8;
    var_18 = var_7;
    var_19 += (((var_4 + 2147483647) >> (39106 - 39079)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (min(((var_6 ? var_7 : (arr_1 [i_1 - 1] [i_0]))), var_8));
                var_21 = var_13;
                var_22 = ((-((~(arr_0 [i_1 - 2])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_23 += ((~(((min(var_15, var_2)) * (89 && var_5)))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] = ((((((arr_10 [i_0] [i_0]) >= var_11))) <= (((255 >= (arr_11 [i_4] [i_4] [i_4 + 1] [4] [i_4 + 1] [i_4 + 1]))))));
                                var_24 -= ((((~63447) >= ((((arr_2 [1]) >= (arr_4 [0] [10] [0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
