/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [12] [9] = var_8;
            var_18 = ((var_3 & (arr_4 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (arr_12 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]);
                            var_19 = (arr_4 [i_4]);
                            var_20 = (arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_21 = ((var_3 >= -110) <= (arr_6 [i_2 + 1]));
                            var_22 = var_5;
                            var_23 = var_10;
                            arr_20 [i_0] [i_0] [i_0] = (arr_4 [i_3 + 2]);
                        }
                        for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_24 |= 0;
                            var_25 &= (((((arr_19 [i_0] [i_0] [i_2] [i_3 + 2] [i_6 + 1] [i_6 + 1] [i_6]) ? var_8 : -25450)) >> ((((var_6 ^ (arr_22 [i_0] [i_0] [7] [i_0] [9] [i_0]))) + 1029958140))));
                        }
                        for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_1] [i_3 + 2] [i_3 + 3] [i_0] [i_1] [i_1] [i_0] = var_12;
                            var_26 &= var_17;
                            var_27 = (((arr_18 [i_0] [i_0] [i_2 - 3] [i_3 - 2]) ? (arr_25 [18] [i_0] [i_2 - 3] [i_2] [i_3 - 3] [i_7 + 3] [i_7]) : -29));
                            var_28 = ((((((arr_24 [i_0] [10] [2] [i_2] [19] [i_0]) || var_12))) * (!var_17)));
                        }
                        var_29 = (-2147483647 - 1);
                        var_30 = (((arr_13 [8] [i_1] [8] [8] [i_1] [i_1] [i_1]) && 179));
                        arr_27 [i_0] [i_1] = (-26 * 255);

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_2 - 3] [i_3] [i_1] = -var_13;
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2] [i_3] |= ((~(arr_17 [i_2 - 3] [i_2 - 3] [i_3] [i_3 - 3] [0] [4] [i_8])));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = 696;
                            var_31 = ((((696 ? 3834383163 : (arr_24 [i_0] [i_0] [i_2] [i_3] [i_3] [15])))) ? var_17 : (((3834383163 ? (arr_19 [11] [11] [11] [i_8] [i_8] [i_8] [i_8]) : var_6))));
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_35 [i_0] [i_0] [12] [i_3] [i_9] = var_6;
                            arr_36 [i_0] [6] = (arr_12 [i_9] [i_3] [i_2 - 1] [i_0]);
                            arr_37 [i_0] [i_1] [i_2 + 1] [i_3] [i_9] = (~var_4);
                            arr_38 [i_0] [i_0] = (((arr_28 [i_2 - 2] [i_3 + 1] [i_2] [i_3] [i_0]) / var_12));
                        }
                    }
                }
            }
            var_32 = (min(var_32, (arr_8 [i_0])));
        }
        var_33 = ((((var_9 <= (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [18]))) ? ((-1 ? var_6 : var_15)) : (arr_6 [i_0])));
        var_34 = arr_11 [i_0] [i_0] [i_0] [i_0];
    }
    var_35 = 64840;
    var_36 = ((var_5 ? 17573932145109743763 : ((min(var_7, (max(var_15, var_2)))))));
    var_37 = ((((min(var_12, ((var_14 ? var_15 : 244))))) ? 699 : var_8));
    #pragma endscop
}
