/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_0] [8] [i_1 + 1] = ((-69 ? 68 : -68));
            var_16 = (((var_7 ? (arr_1 [i_1]) : var_5)));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                arr_10 [i_0] [i_2] [i_2] = ((((1 ? (-9223372036854775807 - 1) : (arr_7 [i_3] [2]))) <= (arr_6 [i_3 + 1] [i_0])));

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_17 = (((var_9 != -69) + var_8));
                    var_18 = var_5;
                    arr_15 [i_0] [3] [3] [i_4] [i_4] &= (((arr_11 [3] [i_3 + 2] [i_3 - 1]) ? (arr_8 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1]) : (arr_8 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_19 -= (((arr_17 [i_3] [i_3] [i_3 + 2] [i_3 + 1]) ? var_6 : (arr_17 [i_0] [i_0] [i_3 + 2] [i_3 + 2])));
                        arr_18 [i_0] [i_0] [3] [7] [7] = ((var_6 ? var_1 : (arr_14 [i_3] [i_3] [i_3 + 2] [i_3 - 1] [1] [i_3])));
                    }
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        var_20 = 68;
                        var_21 = -19;
                        arr_21 [i_3] = ((var_0 >> (!var_9)));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_22 = ((-69 ? var_7 : (arr_6 [7] [7])));
                        arr_24 [i_3 + 1] = (arr_8 [i_0] [i_3] [i_4] [1]);
                        arr_25 [4] [i_2] [i_3] [1] [i_3] = ((arr_11 [5] [2] [2]) ? (68 <= var_6) : ((5221358572122480914 ? var_1 : var_3)));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_23 = 18;
                        var_24 = (min(var_24, (((var_5 || (((69 ? var_14 : var_0))))))));
                    }
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    arr_30 [8] [i_2] = (var_5 + -69);
                    var_25 = (arr_14 [i_9] [i_9] [i_3 + 1] [i_3] [i_3 + 2] [i_0]);
                }
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    var_26 = (min(var_26, (((var_6 ? (arr_9 [i_3 + 1]) : (arr_9 [i_3 - 1]))))));
                    var_27 -= (var_2 && 2788737464);
                }
            }
            var_28 = (((((var_9 ? var_12 : (arr_12 [6] [6] [6] [i_2] [i_2] [6])))) && ((((-1 + 2147483647) << (((arr_34 [i_0] [5]) - 13407)))))));
            var_29 = (min(var_29, ((((arr_29 [i_0] [i_2] [1] [i_0]) >> ((((arr_12 [i_0] [i_2] [i_2] [i_0] [i_0] [i_2]) && var_10))))))));
            var_30 = (min(var_30, 1));
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            arr_39 [i_11] [i_11] = -96;
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 9;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 8;i_14 += 1)
                    {
                        {
                            arr_47 [i_0] [i_0] [i_12] [i_13] [2] = (((arr_4 [i_13 + 1]) && (arr_4 [i_13 + 1])));
                            arr_48 [1] = (((arr_22 [i_0] [i_11]) < 55397));
                            arr_49 [i_0] [i_14] [6] [i_0] [4] &= (((8067608991897275705 * var_7) ? (((arr_8 [i_0] [i_11] [i_12] [9]) / (arr_44 [i_0] [i_0] [i_0] [i_0]))) : ((var_9 ? (arr_41 [i_13 - 2] [i_14]) : (arr_26 [i_11] [i_12] [i_12] [i_13] [i_12] [i_12])))));
                        }
                    }
                }
            }
            var_31 = 68;
            var_32 = (((arr_46 [i_0] [i_11] [i_11] [i_11] [0]) ? (arr_46 [i_11] [i_11] [i_11] [i_11] [i_11]) : -9));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    {
                        var_33 = (arr_29 [i_15] [i_15] [i_15] [i_16]);
                        arr_54 [i_0] [i_0] [i_0] = ((((10119 ? -876188104 : (arr_12 [i_0] [i_11] [8] [i_16] [i_16] [i_16]))) ^ (arr_9 [i_16])));
                    }
                }
            }
        }
        arr_55 [i_0] = -var_11;
    }
    var_34 = (max((min(-5221358572122480929, 10146)), (((var_13 ^ 16364637699960917984) ? var_3 : (var_11 | var_7)))));
    var_35 = 10138;
    #pragma endscop
}
