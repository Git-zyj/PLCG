/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_20 = 7282226540800233607;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 ^= ((!(var_19 - 0)));
                    var_22 &= 17;
                    var_23 += (((arr_6 [i_2] [i_0]) ? (arr_4 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2]) : (((arr_4 [i_0] [i_1] [i_2] [i_1]) ? 17 : (arr_5 [i_0] [i_0 + 1] [i_0 - 1])))));
                }
            }
        }
        var_24 = (((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1]) : 3360606139));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_17 [i_4] [i_4] [i_4] [i_4] [i_4] |= (((var_0 > var_2) ? (arr_2 [i_4 + 3] [i_0 + 1]) : (((arr_1 [1] [i_3]) % -4))));
                            arr_18 [i_0 - 1] [i_3] [7] [i_0 - 1] [i_0 - 1] = (arr_12 [i_0 + 1] [i_3]);
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_22 [14] [i_5] [i_4 + 4] [i_3] [i_0] = var_19;
                            var_25 = 25;
                            var_26 = (-4 ? 4294967293 : ((-(arr_10 [i_0 + 1]))));
                            var_27 += ((-(arr_4 [i_4 + 3] [i_0] [i_0 - 1] [i_0 - 1])));
                        }

                        for (int i_8 = 3; i_8 < 14;i_8 += 1)
                        {
                            var_28 = (min(var_28, var_14));
                            var_29 = (max(var_29, ((((arr_13 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1]) + (arr_13 [i_4 + 4] [7] [i_8] [i_8 + 2] [i_8 - 3]))))));
                            var_30 = (min(var_30, ((((((arr_0 [i_0] [i_3]) ? var_2 : (arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) != (!var_11))))));
                            var_31 = (min(var_31, (!426397771)));
                        }
                        var_32 = (max(var_32, 4));
                    }
                }
            }
            var_33 = (((arr_3 [i_0 - 1] [i_0 - 1]) & (arr_3 [i_0 - 1] [i_0 + 1])));
        }
    }
    var_34 = (max(var_34, ((min((min(22, (max(1, 63)))), ((((((1480907948 ? var_1 : var_3))) ? ((0 ? 4634 : 2147483638)) : (-2147483647 - 1)))))))));

    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_35 = (min(((((max(4662, 17))) ? (((arr_7 [i_9] [13]) ? (arr_1 [i_9] [i_9]) : (arr_0 [i_9] [i_9]))) : (arr_10 [i_9]))), (arr_20 [i_9] [4] [i_9] [i_9] [i_9] [5])));
        arr_30 [i_9] [i_9] = ((((((-29273 ? -445408116 : -113)))) ? (((arr_29 [i_9] [i_9]) ? (arr_29 [i_9] [i_9]) : (arr_11 [i_9] [i_9] [i_9] [5]))) : (min((!-7831832721409109746), (arr_20 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))));
        arr_31 [i_9] = max(((min((arr_1 [i_9] [i_9]), (arr_4 [i_9] [12] [i_9] [i_9])))), (min(((min(3868569525, var_16))), (min(0, -4658267508446207042)))));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    {
                        arr_41 [i_10] [i_11] [i_12] [i_10] = (((((arr_2 [i_11 + 3] [i_11 + 2]) || (arr_2 [i_11 + 2] [i_11 + 1]))) || ((((arr_2 [i_11 + 3] [i_11 - 2]) ? (arr_2 [i_11 + 2] [i_11 + 3]) : (arr_2 [i_11 + 3] [i_11 + 3]))))));
                        var_36 = (min(var_36, (((((min((arr_40 [i_11] [i_11 - 1] [i_11 + 2] [10] [i_11 + 1] [i_11 - 2]), (((!(arr_39 [i_10] [11] [i_12] [8] [i_10] [i_12]))))))) ? 24556 : ((((min(var_19, var_9))) ? (max((arr_11 [12] [15] [i_12] [i_12]), var_5)) : ((min(var_13, (arr_13 [i_10] [i_13] [i_12] [i_13] [i_10])))))))))));
                    }
                }
            }
        }
        var_37 = ((!(((var_7 ? (arr_36 [i_10]) : (arr_36 [i_10]))))));
    }
    var_38 = (((max((max(var_18, var_18)), var_3)) == ((max((!276428277), ((3360606139 ? 3868569538 : var_8)))))));
    #pragma endscop
}
