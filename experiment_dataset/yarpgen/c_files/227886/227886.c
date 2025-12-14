/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_0] = (((arr_1 [i_1 - 1]) % (((arr_3 [i_0]) ? (arr_4 [i_2 + 2]) : (arr_2 [i_0] [i_0])))));
                    arr_10 [i_0] [i_0] [i_2] = var_15;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_16 = (arr_11 [i_2 + 1] [i_2 + 1] [i_4]);
                            var_17 = (((((36469 >> (14423267163277802013 - 14423267163277802000)))) ? ((((arr_14 [i_1 - 1] [i_1] [i_1] [13] [i_1]) || (arr_5 [i_3] [i_3] [i_2] [i_3])))) : (!18446744073709551615)));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_11 [2] [i_5] [i_1 - 1]);
                            var_18 = (min(var_18, (((2640 + -5544594564934750363) ? ((15742 ? (((~(arr_16 [i_0] [i_2] [2])))) : ((3225061529608384726 ? 18446744073709551592 : 1)))) : 38394))));
                            var_19 = (((((((((arr_8 [i_0] [i_2] [i_2]) - -7535))) ? ((((var_1 + 2147483647) >> (arr_12 [i_3] [i_3])))) : (max(2628000687, (arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_2])))))) ? (!1) : 131880311));
                            arr_21 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = ((!(arr_6 [i_0] [i_0] [i_2])));
                        }
                        arr_22 [i_2] [i_2] = (((!307958779) >= (max(-941286718, 1608))));
                        arr_23 [i_1] [i_2] = ((~(min((min((arr_15 [i_0] [i_1] [i_2 + 2] [i_3] [i_3] [i_2]), -6737816996760392282)), (arr_12 [i_1 - 1] [i_1 - 1])))));
                    }
                }
            }
        }
    }
    var_20 = ((!((max(((0 ? -103 : 6579587846035363927)), (var_14 || 2669))))));
    #pragma endscop
}
