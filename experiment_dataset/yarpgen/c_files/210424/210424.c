/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((119 + -1115433672928841155), (((var_11 << (157 - 149))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (var_10 == var_2);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] = ((~((min(19267, 19254)))));
                                var_18 = var_0;
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] |= (min(var_9, ((((var_3 ? 19267 : 46269)) << (46268 - 46261)))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_2] = (((arr_5 [i_0] [i_0] [i_1] [i_2]) | (arr_3 [i_0] [i_0])));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_19 = (max(var_19, (((-(max(var_15, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((35036 ? (19256 << 6) : 19245));
                        arr_19 [11] = 33554428;
                        var_20 = (((min(((var_13 << (((var_4 + 6609087199767722919) - 4)))), ((~(arr_3 [i_1] [i_1]))))) + (arr_10 [i_1])));
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        var_21 = (min((((arr_9 [i_6 + 1] [1] [i_2] [i_2] [i_1] [1]) ? ((var_10 ? (arr_3 [i_0] [i_0]) : 19265)) : 86)), (((6 == (arr_16 [i_0] [18] [14] [i_6 + 1]))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_22 = -17592186044416;
                            var_23 = (((((var_9 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_7]) : -118))) ? var_9 : (~var_4)));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_8] [i_8] [i_6 - 1] [5] [i_2] [5] [i_0] &= (arr_7 [6] [6] [i_2] [i_2] [6] [6]);
                            arr_29 [i_0] [i_0] [i_1] [i_2] [12] [i_8] = ((((min(-19265, var_6))) && (var_8 < var_10)));
                            var_24 -= var_7;
                            var_25 = (arr_25 [i_1] [i_1]);
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [i_0] [i_0] [3] [i_9] = ((729879779 ? 19272 : 1696134131));
                            var_26 = (((((var_1 << (((arr_11 [i_6] [i_6] [i_6 - 1] [12] [i_6]) + 1895101405316976186))))) ? var_15 : ((((var_7 >> (var_13 - 172))) << (var_4 + 6609087199767722910)))));
                        }

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_27 |= (max((17592186044416 >= -17592186044411), var_7));
                            var_28 = (max(var_28, (((((-(arr_24 [i_6] [14] [18] [i_6 + 1] [i_2] [1] [18]))) << (((var_12 + 149) - 7)))))));
                            var_29 += (((((arr_4 [i_6 - 1] [i_6 - 1] [i_10]) << (var_4 - 106))) << (((!46280) << (((arr_21 [i_6] [i_6] [i_6 + 2] [0]) + 30))))));
                            var_30 += (arr_26 [i_0] [i_0] [i_2] [i_6] [i_10]);
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_38 [2] [i_0] [17] [14] [i_0] = (46269 ? 13791 : 46269);
                            var_31 = max(-var_6, ((~(max(1027261547, var_4)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_32 = (((arr_27 [i_0] [6] [i_0] [i_1] [i_2] [i_0] [15]) < var_13));
                        var_33 = (max(var_33, (arr_3 [i_2] [i_0])));
                        var_34 ^= (arr_26 [i_12] [i_2] [11] [i_1] [4]);
                        arr_42 [i_12] [i_2] [15] [15] [i_12] [i_1] = (arr_30 [i_0] [i_0] [13] [i_0] [i_0]);
                        arr_43 [i_12] [i_12] [i_2] [5] [i_2] = (arr_37 [0] [11] [i_1] [i_1] [i_1] [i_1]);
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_35 = var_1;
                                var_36 = ((~(((((var_15 | (arr_35 [i_0] [i_1] [i_2] [i_2] [i_13 - 1] [i_13] [i_14])))) ? -1027261543 : (arr_2 [i_13 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
