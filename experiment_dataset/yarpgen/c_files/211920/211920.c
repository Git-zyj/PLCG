/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((6275 || (244 + 40761)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_20 = (max(var_20, 61868));
            var_21 = (((1 && 189) && (52439 || 69)));
            var_22 = ((((((arr_4 [i_0]) / var_4)) * ((3668 << (var_2 - 3728220763))))));
        }
        var_23 = (((var_3 + var_1) <= (arr_3 [i_0] [i_0])));

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    var_24 = (max(var_24, ((((((arr_11 [i_0]) << (((arr_6 [i_0]) - 14786136948882607222)))) + var_9)))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_5] = (((arr_10 [i_2 + 2]) && (1 && 1)));
                        arr_18 [i_5] [i_4] [i_4] [i_4] = (((238 <= 31) - (52436 != 15665027584618922692)));
                        arr_19 [i_3] [i_5] = (47 - 100);
                        var_25 = (((-1463083981 - 3704941722754496749) + ((((arr_8 [i_0] [i_0] [i_4 + 1]) + var_2)))));
                    }
                    var_26 = ((((((arr_10 [i_0]) <= var_8))) >> (((var_13 + 3) - 70))));
                }
                arr_20 [i_0] [i_0] [i_2 - 1] [i_3] = var_2;
                arr_21 [i_0] [i_0] [i_0] [i_0] = 31;
                var_27 += 115;
                var_28 += ((1242540886536382754 + ((12980 / (arr_10 [i_3])))));
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                arr_26 [i_6] [i_6] = ((var_0 - ((((50945 * 6492445818949003885) != (var_2 < var_0))))));
                var_29 = (((((((arr_0 [i_2] [i_2]) << (var_9 - 14328527475632001272)))) && (arr_24 [i_0] [i_2 - 2] [i_6]))) && (246 == var_7));
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                arr_29 [i_0] [i_2 + 1] = (1 <= 318181621);
                arr_30 [i_0] [i_0] = (((((var_10 ^ (arr_12 [i_0] [i_2] [i_2] [i_2]))) - (var_9 <= var_13))));
                arr_31 [6] [6] [i_0] = (((var_5 & var_12) && (((3976785681 - (790161224 / 4154992506323111765))))));
            }
            var_30 = 18446744073709551608;
            arr_32 [i_0] [i_2] [i_0] = (((((11954298254760547731 * (arr_15 [i_2] [i_2] [i_2] [i_2] [i_2]))) * (var_0 / var_18))));
            arr_33 [i_2] [i_2 + 1] = (((var_10 << (var_1 - 524862705))));
        }
    }
    #pragma endscop
}
