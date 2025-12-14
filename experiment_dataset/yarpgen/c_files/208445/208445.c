/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_15 ? 29083 : 22)) >> (var_6 - 38760))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((!((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 ^= -86;
                    arr_9 [i_0] [i_1] = (min(-105, 25080));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [10] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] = ((max(var_4, (arr_10 [i_0] [i_0] [i_0] [i_3] [i_4 - 1]))));
                                arr_16 [i_0] [i_2] [i_2] [i_4] [i_2] [i_2] = (max((!25080), ((105 ? (arr_8 [i_3] [i_4 - 1] [i_3 - 2] [i_3 - 1]) : -32645))));
                                var_18 = (-(((arr_13 [i_4 + 1] [i_1] [i_3 - 2] [i_1]) ? ((var_11 ? (arr_4 [2]) : (arr_13 [5] [i_3 + 1] [i_1] [i_1]))) : 1606612662)));
                                var_19 = (min((((((max((arr_6 [i_0] [i_0] [i_0]), -32656))) ? 25691 : var_0))), (min(-var_14, 18446744073709551591))));
                                var_20 = (max((arr_12 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3 - 2]), -var_2));
                            }
                        }
                    }
                    var_21 = (max(var_14, ((((((arr_8 [10] [i_1] [i_2] [i_2]) ? 9223354444668731392 : 32644))) ? var_8 : -55))));

                    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_22 = (arr_17 [i_5 + 2] [i_1] [8] [i_5] [i_5 + 1] [i_5]);
                        var_23 = (min(var_23, ((max(((!(100 != 192))), ((1076483687 < (!25068))))))));
                        arr_19 [i_5] [10] [i_2] [10] = (min(((((arr_11 [i_0] [i_1] [i_2] [i_0] [i_5]) < 2147483647))), ((var_9 ? (~-32644) : ((1626 ? 9079256848778919936 : -1922222963))))));
                        var_24 = ((~(arr_8 [7] [i_1] [i_1] [i_1])));
                    }
                    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_25 = (min(var_25, var_12));
                        arr_22 [i_2] [i_1] [i_2] [i_6 + 1] [i_6] [0] = (~8191);
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_26 = (min(var_26, (arr_20 [i_7] [i_7])));
        arr_25 [i_7] = (~var_14);
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_29 [i_8] [i_8] = ((~(arr_28 [i_8] [i_8])));
        arr_30 [i_8] = -26975;
        var_27 = ((((var_15 ? (((var_10 ? 25689 : -25674))) : ((var_3 ? 2147483647 : 8569277011989266860)))) >> (((~-7046614739283859980) - 7046614739283859956))));
    }
    var_28 = ((-(max(((var_9 ? 3864402762792655211 : var_3)), var_11))));
    #pragma endscop
}
