/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((((((1 < 727169933380068432) ? (!var_0) : var_17))) ? ((var_3 ? var_7 : ((1347576636 ? 1347576654 : var_12)))) : ((max(129, (3338918506690501982 > 1))))));
    var_19 += var_17;
    var_20 = ((-var_3 - ((((!var_8) % ((min(1, var_7))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_21 = (arr_1 [i_0] [i_0 - 2]);
        var_22 = (min(var_22, (-1 * var_5)));
        var_23 += var_14;

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_24 += var_8;
                var_25 = (((arr_1 [i_1 - 1] [i_1 + 3]) ? (arr_1 [i_1 - 1] [i_1 + 3]) : (arr_1 [i_1 + 2] [i_1 + 4])));
                arr_9 [i_2] = (arr_6 [i_0]);
            }
            var_26 = ((var_14 ? (arr_8 [i_0 + 1]) : (arr_8 [i_0 - 2])));
            var_27 = (~var_9);
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
            {
                arr_15 [i_4] [i_3] [14] [i_0 + 2] = var_11;
                arr_16 [i_0] [i_0] [i_0] [i_0] = (((arr_3 [i_4] [i_0 + 2] [i_0 - 2]) + (arr_3 [i_3] [i_0 + 2] [i_0 - 2])));
                arr_17 [i_4] = ((1 * (arr_13 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_4])));
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_28 = var_2;
                    arr_23 [i_6] = (((arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 2]) && (arr_19 [i_0] [i_0 + 1] [i_0 + 2])));
                }
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_29 += 1182310501;
                        var_30 = (~-108);
                    }
                    arr_29 [i_5] [i_5] [i_5] [i_3] [i_3] [i_0] |= (((((~(arr_8 [i_0])))) ? 0 : (arr_26 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7])));
                    var_31 = (((arr_24 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2]) >> (((((arr_8 [i_0]) | 83)) - 1065118039))));
                    arr_30 [i_0] [i_3] [i_5] [i_7] = ((~(arr_13 [i_0] [i_3] [11] [i_7])));
                }
                arr_31 [i_0] [i_3] = var_10;
            }
            var_32 -= (arr_19 [i_0] [i_0] [i_0]);
            var_33 ^= var_2;
        }
        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {
            var_34 ^= (((((4055018216 ? var_11 : -1))) ? (arr_13 [i_0 + 1] [i_9 + 1] [i_9 + 3] [6]) : (arr_0 [i_0 - 2])));
            var_35 = (arr_34 [i_0] [i_9]);
        }
        var_36 = (arr_24 [i_0 - 1] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 0;i_10 += 1)
    {
        arr_38 [i_10] |= ((((26274 ? (arr_35 [i_10]) : (arr_37 [i_10]))) == 1));
        arr_39 [i_10 + 1] = var_16;
    }
    #pragma endscop
}
