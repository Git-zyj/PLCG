/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_12 += ((!((!(arr_1 [i_0] [i_0 - 1])))));
        arr_2 [i_0] [i_0] = 0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = ((max(((8235862624918265573 || (arr_5 [16] [16] [1] [i_1]))), (9565 || -9566))));
                    var_14 = (min(var_14, (((var_3 ? (!var_6) : (min(9564, -37)))))));
                }
            }
        }
        arr_8 [i_0] = ((var_0 && (!4845129631489362676)));
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_14 [5] = (((arr_3 [i_3] [i_3]) && ((max(2789, (((!(arr_3 [i_3] [i_3])))))))));

                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_15 = max((min((arr_4 [i_3 + 1] [i_5]), (arr_4 [i_3 - 1] [i_5]))), (max((arr_4 [i_3 + 2] [i_5]), (arr_4 [i_3 + 2] [i_5]))));
                    var_16 = (!18446744073709551612);
                }
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_17 = 11368;
                                arr_27 [i_3] [i_3] [i_6] [i_6] [i_8] = 54164;
                                arr_28 [12] [i_6] [i_7] [i_6] [i_8] [i_3] [7] = -9566;
                                var_18 = (~5745);
                                arr_29 [i_4] [i_6] [i_6] [i_4] [i_4] = (max(var_9, 9566));
                            }
                        }
                    }
                    arr_30 [i_6] = ((var_8 ? var_3 : 18446744073709551610));
                    var_19 = ((~((47146 << (16309 - 16300)))));
                }
                for (int i_9 = 2; i_9 < 12;i_9 += 1)
                {
                    var_20 = -9565;
                    arr_33 [i_9] [i_4] [i_9] = ((-((-((max(var_5, var_2)))))));
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((((max((!var_5), -2075))) ^ (((!((max(9564, var_5)))))))))));
                                var_22 = (min(16384, (max(238, (-32767 - 1)))));
                            }
                        }
                    }
                    arr_42 [i_3] [i_3] [i_10] = (((((!(!var_7)))) >= ((-(!var_0)))));
                    arr_43 [i_3] [i_10] [i_10] = max((max(10, (min(-8267, var_3)))), (!var_5));
                    arr_44 [i_10] [i_4] [i_10] = 48513;
                    var_23 = ((-((((-(arr_36 [i_3] [i_4] [11] [i_10])))))));
                }
            }
        }
    }
    #pragma endscop
}
