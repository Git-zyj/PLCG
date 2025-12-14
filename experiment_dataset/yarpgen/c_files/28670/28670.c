/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((((~var_9) ? (max(var_10, var_5)) : (((min(var_9, var_11)))))) & (max(2987296337, var_15))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = ((~(((arr_0 [i_0]) >> (((~-11849) - 11848))))));
        var_18 = (max((((((597724665 >= (arr_1 [i_0]))) && -var_3))), ((~(arr_1 [i_0])))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_19 = (min(var_19, (arr_2 [i_1])));
            var_20 = ((-(((arr_1 [i_0]) - ((((arr_2 [i_0]) + -13308)))))));
            arr_4 [i_0] [i_0] = ((3697242610 && (((~(arr_0 [i_1 + 3]))))));

            /* vectorizable */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                var_21 = (((arr_3 [i_2 + 1]) + 2987296337));

                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_22 = (((((-1 ? 3697242619 : (-32767 - 1)))) | (((arr_0 [i_1]) ? 6233394963229646113 : 0))));
                    arr_11 [10] [i_2] [17] = ((!(~240)));
                    arr_12 [i_0] [i_1] [i_2] [i_1] = arr_6 [i_2] [i_1] [i_2];
                    arr_13 [i_0] [i_0] [i_0] [i_0] = 220;
                }
                var_23 = var_5;
            }
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                var_24 = (min(((((var_13 & -10801) < (~var_13)))), (~-13308)));
                var_25 = (min(var_25, ((17295 ? var_11 : (((((~var_15) < (~140)))))))));
                var_26 = ((((min((((arr_9 [i_0] [i_0] [i_1] [i_0]) ? (arr_7 [i_4] [i_4] [i_1] [i_0]) : 8)), (!var_2)))) ? ((min(-27024, 12213349110479905503))) : (~var_3)));
            }

            /* vectorizable */
            for (int i_5 = 4; i_5 < 24;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_27 = 597724677;
                    arr_21 [24] [i_1] = 0;
                    var_28 *= ((-(arr_20 [i_0] [i_0] [i_0] [i_6])));
                    var_29 = ((-(arr_16 [i_5 - 3] [i_5 - 3] [i_1 - 1])));

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_26 [i_0] [i_1] [i_1] [i_5 - 1] [i_5 - 1] [i_7] [i_7] = (arr_0 [i_7]);
                        arr_27 [i_7] [i_6] [i_6] [i_5] [17] [i_0] [i_0] = (((~13303) ? (18446744073709551615 & var_10) : (arr_3 [i_5])));
                        arr_28 [i_0] [i_0] [i_1 - 1] [i_5] [i_1 - 1] [i_6] [i_7] = (var_13 ? (var_1 ^ 152) : ((var_5 << (var_9 + 8381))));
                    }
                }
                var_30 *= (((arr_7 [i_0] [i_0] [i_5 - 4] [i_1]) ? (((10 ? (arr_8 [i_0] [i_0] [i_1] [11]) : -16818))) : (arr_22 [i_1] [i_1 - 1] [i_0])));
                var_31 -= (((15 ? 8073707619764725189 : var_9)));
            }
        }
        var_32 = (((((((((3181090712 ^ (arr_15 [i_0] [i_0])))) && (8073707619764725189 + var_14))))) > 0));
        arr_29 [i_0] = var_11;
    }
    #pragma endscop
}
