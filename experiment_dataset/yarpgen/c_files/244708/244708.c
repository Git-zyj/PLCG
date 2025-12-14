/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_3 >= var_4) * ((var_15 ? var_6 : var_11))))) ? var_12 : var_14));
    var_18 = var_10;
    var_19 = (((((-(64 * 192)))) && var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = var_3;
                var_20 ^= ((~(((((var_14 || (arr_0 [0])))) - (arr_2 [i_0] [i_1])))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_21 -= (((((arr_6 [i_3 - 2] [i_1 + 1]) || var_4)) ? (arr_6 [i_3 + 2] [i_1 - 1]) : (arr_6 [i_3 + 2] [i_1 - 2])));
                                var_22 -= 49;
                                var_23 = 192;
                            }
                        }
                    }
                    arr_15 [i_2] [i_0] = ((!((min((arr_11 [i_1 + 1] [i_0] [i_0] [i_1 - 2]), (arr_6 [i_1 - 1] [i_1 - 1]))))));
                    arr_16 [i_0] = ((((-(arr_14 [i_1] [i_1 + 1] [i_1 - 2]))) == var_16));
                    var_24 = (arr_14 [i_0] [i_1] [i_1]);
                }
                var_25 = 192;
            }
        }
    }
    var_26 = (max(var_26, (((((((var_3 % var_0) ? var_9 : (!var_8)))) ? -var_4 : (((var_3 % var_14) ? (!var_9) : var_5)))))));
    #pragma endscop
}
