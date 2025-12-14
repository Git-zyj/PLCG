/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = (min(var_15, (((-255 <= (((7034007137014986972 || 1299360817) ? var_11 : (var_7 * var_4))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = var_6;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 |= (((!var_5) + (((arr_4 [i_0] [i_0] [i_1]) % (arr_1 [i_0])))));
            var_18 ^= -2943827077100047673;
        }

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_19 = (max(var_19, (((var_11 > (arr_4 [i_2] [10] [i_4]))))));
                    var_20 = ((!(2943827077100047672 | var_1)));
                    var_21 ^= (!var_11);
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] = (max((min((arr_5 [i_0]), (arr_5 [i_3]))), (-2943827077100047673 >= 23)));

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_22 = var_13;
                        var_23 = (max(var_23, (arr_6 [7])));
                        var_24 = ((((max((arr_1 [21]), (arr_2 [i_2] [i_5])))) ? ((((var_2 ? (arr_3 [i_2] [i_3]) : 8759015374409410860)) % ((((var_8 + 9223372036854775807) << 0))))) : (~-2976409080778601671)));
                        var_25 = (max(var_25, 5337343002595400888));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_20 [i_0] [19] [i_0] [i_5] [10] = ((!-15) || 157);
                        var_26 ^= (((((((arr_2 [i_2] [0]) || (arr_2 [i_2] [i_3]))))) % (arr_8 [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_23 [i_0] [i_2] [i_0] [i_0] [i_8] = (((arr_18 [i_0] [i_0] [14] [i_0] [i_0]) ? 13109401071114150742 : (arr_4 [18] [i_2] [i_2])));
                        var_27 = (min(var_27, (arr_13 [i_0] [1] [1])));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_28 = max(2554805804592415047, (arr_19 [i_0] [i_2] [i_3] [10] [i_0] [18]));
                        var_29 ^= ((((((var_5 >= 17840462469317152039) > (max((-2147483647 - 1), var_13))))) - var_4));
                    }
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    arr_30 [20] [i_2] [i_2] [i_2] &= (((((arr_25 [i_3]) && var_12)) ? (!var_0) : ((((((max(var_5, 1))) || -64))))));
                    var_30 = 1346296905005289378;
                    var_31 = var_6;
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    var_32 = ((-((5183911426234917009 >> (var_2 & var_12)))));
                    arr_34 [i_2] [i_2] [i_2] [i_0] = -26024;
                }
                arr_35 [i_0] [i_0] [10] = (+-64);
                var_33 = (0 & var_11);
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                arr_39 [i_0] [i_2] [i_0] = (((((((arr_29 [5]) <= (arr_13 [i_0] [i_0] [i_0])))) + 12534)) != ((((((var_12 ? var_8 : var_12))) && 64485))));
                var_34 = (max(var_34, (((!((((arr_29 [i_0]) ? (arr_38 [i_0] [i_0] [i_0] [13]) : var_0))))))));
            }
            var_35 = (max(var_35, (((var_0 >= (((((2870768332908941273 || (arr_25 [1])))) >> ((272678883688448 ? 1 : 272678883688448)))))))));
            var_36 ^= 2808912047570956394;
        }
    }
    #pragma endscop
}
