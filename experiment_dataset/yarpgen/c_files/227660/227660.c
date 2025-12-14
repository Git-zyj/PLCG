/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -19000;
    var_17 ^= min(var_4, (((((min(var_12, -18996))) && (!19004)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = ((-19000 ^ (((-2982996791182915162 ? (arr_4 [i_1] [i_1 - 3]) : (arr_4 [i_0] [i_1 - 1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = ((((min((min((arr_0 [i_1 - 2]), var_6)), (((-18999 & (arr_3 [i_0] [i_3]))))))) | (((19004 & 607566815678149658) | ((((arr_11 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] [i_4] [i_0]) | (arr_9 [i_0] [i_1 - 1] [i_0]))))))));
                                var_20 = ((19009 >= ((-var_3 * (arr_10 [i_1 - 1] [i_1 - 2])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_17 [i_5] [i_5] = 18994;
                            var_21 = (((((-19018 * -18996) / ((108 ? 4294967295 : -246156321)))) < (min((~var_3), -18996))));
                            var_22 &= -18984;
                            var_23 = (max(((((((var_3 / (arr_9 [i_0] [i_1] [i_6])))) ? (((-19023 + 2147483647) >> (18991 - 18985))) : (var_8 != 94)))), (((19002 ? 18999 : (arr_7 [i_6] [i_1]))))));
                        }
                    }
                }
                arr_18 [i_0] = var_10;
            }
        }
    }
    var_24 = ((((max(((var_7 ? -102 : var_9)), 45358))) ? ((((2722341819 + var_3) ? -var_5 : (!18994)))) : (((18992 ? var_14 : var_7)))));
    #pragma endscop
}
