/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((-((-(min(var_6, 3880221696))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [7] = (min((var_1 % var_2), (((var_0 + (-32754 < 7056570233287169615))))));
                                arr_14 [i_4] [i_0] [i_2] [i_1] [i_4] = (min((!836646591), (!3880221711)));
                                arr_15 [i_0] [i_1] [i_2] [7] [i_0] = (~-var_6);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((((~(var_11 > var_2))) % -21403)))));
                            arr_21 [i_1 + 2] [i_0] [i_1 + 2] = ((!(((var_4 >> (var_3 - 981263156))))));
                        }
                    }
                }
                arr_22 [i_0] [i_1 - 3] [i_1] = 32748;
                var_16 = (((-26713 ? -111 : 2315170392)));
            }
        }
    }
    var_17 = ((var_1 ? (1 <= -6023) : (((min(17642602502246842969, -13995))))));
    var_18 = (+-var_2);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            {
                var_19 = ((~(((!(((var_8 ? var_6 : 1775975462))))))));
                var_20 = ((((var_11 > ((min(var_12, var_13)))))) | (var_11 >> 0));
                var_21 = (((min(((var_4 ? 0 : 2315170392)), (~2147483647))) != (((-(-2147483647 - 1))))));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((max(2147483647, (~var_0))))));
                            var_23 = (((((13993 == (!1)))) >> (-68 + 92)));
                            var_24 = (max(var_24, (((-((-802377733 ? var_10 : (min(var_0, 57)))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
