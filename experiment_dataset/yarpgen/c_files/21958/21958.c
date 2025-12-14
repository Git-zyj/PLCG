/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((max(23, var_12))), (min(var_4, 17179738112))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] = ((((max(var_6, 86))) && ((min(1008, 1)))));
                            arr_9 [i_0] [i_0] [i_1] [i_0] = ((((-((-23 ? -2071044829575836087 : var_11)))) % 13636));

                            for (int i_4 = 2; i_4 < 11;i_4 += 1)
                            {
                                var_20 = -23;
                                arr_13 [i_0] = (((((arr_5 [i_1 + 3] [i_1 + 2] [i_0] [i_1 + 3]) ? 170 : 181)) != 206));
                            }
                            for (int i_5 = 1; i_5 < 10;i_5 += 1)
                            {
                                var_21 -= ((!(arr_15 [i_1] [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1 - 2] [i_1])));
                                arr_17 [i_3] [i_2] [i_3] &= ((-(~19941)));
                            }
                            for (int i_6 = 3; i_6 < 9;i_6 += 1)
                            {
                                var_22 *= (max((min(((170 ? 1 : 9223372036854775807)), (var_17 + var_16))), (var_14 + 170)));
                                var_23 = (max(var_23, (max(((((~128) * -18546))), 9223372036854775807))));
                                arr_20 [i_6] [i_1] [i_2] [i_0] [i_2] = (((((!(-9223372036854775807 - 1))) ? (!14360) : 23)));
                            }
                            for (int i_7 = 2; i_7 < 10;i_7 += 1)
                            {
                                arr_25 [i_0] [i_1] [i_2] [i_0] [i_7] = ((((arr_6 [i_0] [i_1] [i_0] [i_1 - 2] [i_7] [i_0]) != (arr_7 [i_0] [i_2] [i_2] [i_0]))));
                                var_24 ^= ((!(641140165 != 0)));
                            }
                            var_25 = (((min((!var_8), ((23 ? var_13 : var_8)))) != (((!(((var_6 ? var_6 : (arr_12 [i_0] [i_0])))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_26 -= ((max(1, 228886607)));
                                var_27 = (min(var_27, ((((arr_23 [i_1] [i_1 + 1] [i_1 + 2] [i_1] [i_1]) - ((-(arr_23 [i_1] [i_1 + 1] [i_1 + 2] [i_1] [i_1]))))))));
                                var_28 = (min(var_28, (((((-(min(9223372036854775807, 32760)))) * ((((-1 != ((~(arr_15 [i_0] [i_1] [i_1] [i_8 + 2] [i_8 + 2] [i_10]))))))))))));
                            }
                        }
                    }
                }
                arr_34 [i_0] [i_0] [i_0] = 206;
            }
        }
    }
    var_29 = (max(var_29, ((((((((min(var_10, var_12)))) != (var_18 / var_1))) ? var_11 : (39 != 58165))))));
    #pragma endscop
}
