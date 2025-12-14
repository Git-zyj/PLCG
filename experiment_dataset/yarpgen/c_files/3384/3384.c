/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 29711;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [23] [1] = ((((~(arr_3 [i_0] [20] [i_0]))) != ((var_9 ? (arr_1 [i_0 - 2] [3]) : 2208))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_21 = (((((-1649810907 % (arr_7 [13] [8] [i_0 + 3])))) ? (~var_6) : var_12));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [14] [10] [i_0] [i_0] [i_1] [9] = 0;
                                var_22 = 38956;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_21 [i_0] [i_0 - 2] [24] [16] [i_0] = ((var_14 ? (arr_7 [i_0 - 2] [i_0 - 2] [i_0 + 1]) : var_19));
                        var_23 = (var_11 - var_12);
                        var_24 = (arr_8 [15] [i_0 - 1] [24] [20] [i_0 + 4]);
                    }
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        var_25 = (((((arr_19 [i_0] [i_0]) ? (((var_17 ? 1 : -35))) : ((6325985000421298455 ? var_5 : var_18)))) << (((((arr_1 [i_0 + 4] [i_7 - 1]) ? var_1 : (arr_12 [1] [i_7] [i_7] [i_7 - 1] [i_7 - 2]))) - 18446744073156082793))));
                        var_26 = ((-((((arr_3 [i_0] [8] [1]) && (((-2788917302661585254 ? var_5 : 38956))))))));
                        var_27 = ((((((var_0 && (arr_13 [22] [i_0 - 2] [i_0 - 2] [4] [i_0] [i_7 - 1] [i_7]))))) - ((((max(var_16, 1092591198))) ? (arr_2 [i_7 + 1] [i_0 - 2]) : (arr_10 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0] [i_7 - 2] [i_7])))));
                    }
                    var_28 = ((((((arr_8 [i_0 + 4] [i_0 + 2] [i_0 - 2] [2] [i_0 - 1]) << (((arr_8 [i_0] [i_0 + 3] [i_0 - 2] [10] [i_0 + 2]) - 21778))))) ? (((!(arr_8 [15] [i_0 + 2] [i_0 + 3] [13] [i_0 - 2])))) : (!var_15)));
                    var_29 = arr_10 [i_5] [i_5] [i_1] [1] [22] [0];
                }
                var_30 = (min(var_30, (((((((arr_0 [i_0 + 1]) ? var_1 : (arr_2 [12] [i_0 + 3])))) ? (((((arr_7 [i_1] [i_0 + 4] [i_0 - 1]) >= (arr_12 [23] [i_0 - 1] [1] [i_0 + 4] [4]))))) : (max((arr_15 [i_0 + 4] [23] [i_1]), (arr_15 [i_1] [i_0 - 2] [i_0 + 4]))))))));
            }
        }
    }
    var_31 = ((((min(var_13, var_6)) >= (((max(1, var_18)))))));
    #pragma endscop
}
