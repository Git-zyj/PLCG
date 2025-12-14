/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((var_0 ? (max(var_4, -var_9)) : var_14)))));
    var_21 = (((((~(min(var_8, var_7))))) ? -var_4 : (max((min(var_5, var_16)), -var_11))));
    var_22 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_23 |= 13695;

                for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_24 = ((~(((arr_7 [i_0] [i_0] [i_2 - 3] [9]) ? (arr_1 [i_2 - 1] [i_2]) : (arr_5 [i_2 - 2] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_25 = var_11;
                                var_26 -= (((arr_5 [i_3 - 1] [i_2 + 1] [i_2 + 1]) ? (((!var_1) ^ (!var_6))) : (((!(((var_4 ? (arr_2 [i_0]) : var_16))))))));
                                var_27 = ((arr_9 [i_0] [i_0] [i_0] [i_0]) ^ (((((arr_7 [i_0] [i_2 - 3] [i_0] [2]) == var_10)))));
                                var_28 = ((((min((((var_16 ? var_19 : (arr_5 [20] [20] [i_1])))), (arr_9 [i_2] [i_2 + 2] [17] [i_2 - 3])))) > (arr_2 [i_1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_29 = ((((max((arr_12 [i_2] [i_2] [i_2 - 1] [i_2 - 2]), (arr_12 [15] [10] [i_2 + 1] [i_2 - 3])))) * ((((arr_12 [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1]) != (arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 2]))))));
                                var_30 = (min(((min(var_10, (arr_0 [i_2 - 3])))), ((~(((arr_16 [i_0] [i_0] [i_0] [i_0] [0]) ? (arr_11 [i_0] [i_1] [i_2 - 3] [i_5 + 2] [i_0] [i_0] [i_5 + 2]) : var_17))))));
                            }
                        }
                    }
                    var_31 = (min(var_31, var_6));
                }
                for (int i_7 = 3; i_7 < 20;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        var_32 *= (min((arr_20 [i_0] [i_0] [i_0] [1]), (arr_11 [i_0] [i_0] [i_1] [i_1] [0] [i_0] [i_8 - 1])));
                        var_33 = (~var_11);
                        var_34 = (((((((min(-13696, (arr_9 [i_0] [i_0] [i_7 + 1] [i_8])))) || (((var_0 ^ (arr_13 [i_0] [i_1] [2] [i_0] [i_7 - 1] [i_8]))))))) * (arr_6 [i_0] [i_8 + 1] [i_7 - 3])));
                    }
                    var_35 ^= (arr_6 [i_7 - 1] [i_7 + 1] [14]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_36 ^= var_13;
                                var_37 = (max(var_14, ((((arr_8 [i_0] [i_7 + 1] [i_7 - 2] [i_9] [i_10 + 1]) ? (arr_8 [i_1] [i_7 + 2] [i_7 - 2] [i_9] [i_10 + 1]) : (arr_8 [i_1] [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_10 + 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_38 = (min(var_15, (arr_18 [i_0] [i_1] [i_0] [i_11])));
                                var_39 &= (arr_11 [i_0] [0] [i_0] [i_7 - 1] [i_11] [0] [12]);
                                var_40 |= var_9;
                                var_41 = (((((var_11 && (arr_1 [i_1] [i_1]))) ? (((var_2 && (arr_25 [i_0] [i_1] [i_7 - 2] [i_7 - 2] [i_12])))) : (((var_2 || (arr_12 [i_1] [i_1] [i_11] [i_12])))))));
                                var_42 = (min(var_42, ((max(var_11, ((var_8 || ((max((arr_3 [i_1] [13]), var_1))))))))));
                            }
                        }
                    }
                }
                var_43 = (min(((max(13683, (((var_3 == (arr_5 [i_0] [i_0] [i_0]))))))), ((1 ? ((var_14 ? var_18 : var_1)) : var_11))));
            }
        }
    }
    #pragma endscop
}
