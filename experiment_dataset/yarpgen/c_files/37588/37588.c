/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_3, var_5));

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_0] [i_1 - 2] [i_1 + 2] = ((-1268657791 | ((((!((max(255, var_7)))))))));
            arr_8 [i_1 + 2] = (arr_4 [i_0] [i_1 - 3]);
            arr_9 [i_1 - 3] [i_0 + 2] [i_0 + 2] = ((~var_10) ? (((arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 3]) ? (min((arr_6 [i_0 + 2]), (arr_5 [i_0 + 2]))) : var_7)) : (((((var_12 ? var_14 : (arr_6 [i_0])))) | var_6)));

            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                var_19 = (max(var_19, (((var_15 <= 29806) & (var_13 | 3026309504)))));
                var_20 ^= ((~(((((arr_4 [i_0 + 2] [i_0 + 2]) && var_5)) ? var_11 : ((-29806 ? -8960643122283074728 : 127))))));
            }
            var_21 = ((-var_6 - (arr_5 [i_0 - 1])));
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            arr_16 [i_3] [i_0] &= ((((max(((48 ? 29776 : 627139058)), (3667828237 % var_11)))) ? (((!(((3511007216 | (arr_10 [i_0 + 3] [i_3] [i_3]))))))) : var_12));

            for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
            {
                var_22 = (min(var_22, var_16));
                arr_19 [i_0] [i_3 - 1] [i_4 + 2] = (!var_11);
                var_23 = ((var_3 ? 1992506744 : (((-(arr_2 [i_3 - 1] [i_0 - 1]))))));

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_24 = (min(var_24, (((((((((arr_20 [i_5]) ? var_2 : var_6)) != ((max(var_0, 2302460582)))))) >= 48397)))));
                    var_25 -= ((~(((var_12 || (arr_12 [i_5] [i_4 - 3]))))));
                }
            }
            for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_26 = (min(var_26, var_17));
                var_27 = (max(var_27, (arr_1 [i_0 - 2] [i_3])));
                var_28 *= (min((29806 - 7008092543125730856), 6));
            }
        }
        var_29 = (max(var_29, var_14));
        var_30 = ((-((8484 * (627139080 * var_13)))));
        arr_25 [i_0 - 1] [i_0 - 1] = (max((arr_4 [i_0] [i_0 + 1]), ((var_5 / (arr_13 [i_0 - 1] [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                {
                    var_31 -= (((~(!56327))));
                    var_32 *= 3270613622;
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_33 = (min((max(((((arr_34 [i_8 + 3] [i_8] [i_8 + 3] [i_8 + 2] [i_8]) || (arr_28 [i_7] [i_7])))), (arr_34 [i_0 + 2] [i_7] [i_8 - 2] [i_9 + 4] [i_10]))), (((!((max(var_6, var_5))))))));
                                var_34 *= ((~(((arr_10 [i_10] [i_9 + 4] [i_8 + 3]) ? 36 : (arr_5 [i_8])))));
                            }
                        }
                    }
                    arr_36 [i_7] [i_7] [i_7] = (((min((((arr_22 [i_7] [i_7]) ? 1 : (arr_15 [i_0 - 1] [i_7] [i_8 - 2]))), -35)) != var_16));
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
    {
        var_35 = (max(var_35, (arr_4 [i_11 + 1] [i_11 - 2])));
        var_36 = ((((~(((-15 + 2147483647) << (3667828216 - 3667828216)))))) ? ((min((arr_32 [i_11 + 2] [i_11 - 1] [i_11 - 2] [i_11]), (((arr_24 [i_11] [i_11 + 2]) ^ var_0))))) : ((((min(var_5, var_17))) | ((3304292439 >> (-15 + 40))))));
    }
    var_37 = var_7;
    #pragma endscop
}
