/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_0]);
                arr_6 [i_0] [i_0] = (min((((max(var_0, (arr_2 [i_0]))) ^ (((var_0 + 2147483647) >> (3068323313 - 3068323294))))), ((max((1226643963 <= var_0), (min(143, 99)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 ^= (((-(!114))));
                            var_19 = (max(((-(arr_0 [i_2]))), ((max(var_6, (~157))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = 3068323340;
    var_21 = (169 >= var_10);

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_22 ^= ((var_8 < 78) ? 178 : (min((max(var_13, var_13)), (((arr_3 [i_4] [i_4] [i_4]) * 18366884799984047928)))));

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_23 = (min(((72 ? (!var_15) : var_16)), ((((((var_8 ? var_16 : 494799667))) ? -177 : 87)))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_24 = (arr_20 [i_4]);
                        arr_23 [14] [i_6] [14] = max((max((var_6 < var_15), 0)), ((((var_15 * 1226643963) * var_12))));
                        var_25 = (((-89 ? ((((arr_16 [6]) ? 1897 : var_6))) : 0)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_28 [i_4] [12] [i_8] [i_5] [i_8] |= (((18009518729858438212 == -96) == (((var_12 && ((max((arr_10 [i_5]), (arr_8 [i_9] [i_8] [i_4] [i_4])))))))));
                        var_26 = 143;
                        var_27 = (168544045 * ((min(var_2, var_12))));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        arr_36 [i_4] [11] [i_11] [i_4] [i_4] [i_4] = ((((((67 ? 4294967295 : var_12))) ? (var_14 >= -29) : (7762 >= 1501409458))));
                        var_28 ^= 18;
                    }
                }
            }
            arr_37 [i_10] = (max(((~(arr_9 [8] [i_10] [13]))), 167));
            var_29 = var_1;
        }
        var_30 = ((-(((((255 ? 437225343851113409 : (arr_10 [i_4]))) >= (((-(arr_10 [i_4])))))))));
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 9;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 9;i_15 += 1)
            {
                {
                    arr_45 [i_13] [i_14] [i_13] [6] = 15547348309990180490;

                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        var_31 *= (max(15547348309990180519, 157));
                        var_32 = (max(var_32, 1858484117));
                        var_33 ^= (((((((!(-2147483647 - 1))) ? (max((arr_20 [i_13]), 1501409459)) : 79438680))) ? ((((arr_47 [i_16] [i_16] [i_14] [i_14] [7] [i_13]) || (arr_2 [17])))) : ((var_6 ? var_4 : var_1))));
                    }
                }
            }
        }
        var_34 *= arr_14 [i_13];
        var_35 = (((var_5 ? ((((arr_32 [i_13] [i_13] [i_13]) == 15547348309990180490))) : 38773)) ^ var_14);
    }
    #pragma endscop
}
