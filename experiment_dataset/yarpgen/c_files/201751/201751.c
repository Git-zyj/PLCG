/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (1837638867 > 19262)));
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = 2457328437;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_15 = (min(var_15, ((((((~(arr_5 [i_2] [i_2] [i_1] [i_0])))) ? 1837638859 : (((arr_5 [5] [i_0] [i_1] [i_0]) ? (arr_0 [i_2]) : (min(0, (arr_0 [i_0]))))))))));
                    var_16 = (max(var_16, ((((64366 > -92) ? (((arr_5 [i_1] [i_1] [i_1] [i_1]) ? (arr_5 [i_0] [i_0] [i_2] [i_2]) : (arr_5 [i_0] [i_0] [i_0] [i_0]))) : ((~(arr_5 [i_0] [i_1] [i_2] [i_2]))))))));
                    arr_6 [i_2] [i_1] [i_0] = (min(36942, ((1 & (arr_1 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (min((min((((1531537212 * (arr_8 [i_0] [i_1] [i_0] [10] [i_3] [10])))), (((arr_10 [i_0]) ? 3038612026535703669 : 646940709)))), ((((arr_8 [6] [6] [i_2] [i_2] [i_2] [i_2]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_4] [6] [i_3] [i_2] [i_1] [i_0]))))));
                                var_18 = (min((((((arr_10 [i_4]) > (arr_11 [5] [i_1] [i_2] [i_3] [i_4] [i_2] [i_1]))) && (arr_0 [i_0]))), (arr_11 [i_0] [i_1] [i_2] [i_2] [i_1] [i_3] [i_4])));
                                var_19 &= (arr_4 [i_0] [i_1] [i_2]);
                                arr_13 [i_2] [i_3] = (((arr_0 [i_3]) ? 111 : 39716));
                            }
                        }
                    }
                    var_20 = 1837638871;
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_21 = (max(var_21, ((max(((-(arr_11 [17] [i_1] [i_5] [i_1] [i_5] [i_0] [i_0]))), (((1038326110 & var_4) ? ((var_1 ? var_6 : 89)) : var_10)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((-(((arr_3 [i_0] [i_1] [20]) ? var_8 : (arr_14 [i_0] [i_1])))));
                                var_22 = (((((((((arr_16 [15]) ? (arr_5 [i_0] [i_1] [i_5] [i_6]) : 54226))) ? var_3 : (((arr_16 [19]) ? var_11 : var_11))))) ? 53264 : var_9));
                                arr_21 [i_0] [i_0] [i_0] [i_5] = (arr_16 [3]);
                                arr_22 [i_7] [i_1] [i_5] [i_6] [i_7] [i_0] = 147;
                                arr_23 [i_0] [i_1] [i_5] [i_6] [i_5] [i_5] = -159;
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            arr_31 [2] [11] [i_5] [i_8] [i_5] = var_0;
                            var_23 = var_3;
                            var_24 = (((~(arr_26 [i_0]))));
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_35 [i_5] [i_8] [i_5] = (max((((((22841 ? 51498 : 148))) ? 90 : -1)), (arr_29 [i_0] [i_0])));
                            var_25 &= (90 | (~var_2));
                            arr_36 [i_0] [i_10] [i_0] [i_8] [i_5] = (min((((((~(arr_3 [4] [i_8] [i_10])))) ? var_9 : (arr_24 [i_0] [i_5] [i_0] [i_0]))), (arr_27 [20])));
                            var_26 = (min(var_26, var_5));
                        }
                        var_27 -= ((+(((arr_12 [i_5] [i_0]) ? var_7 : (arr_12 [i_0] [i_1])))));
                    }
                    var_28 = ((!((((3 | var_8) ? ((min(var_8, (arr_16 [i_5])))) : (((arr_8 [i_1] [i_1] [i_5] [i_1] [i_1] [i_0]) ^ (arr_34 [1] [i_0] [i_0] [i_1] [i_5] [i_5]))))))));
                    var_29 = (min(var_29, var_11));
                }
            }
        }
    }
    var_30 = var_0;
    #pragma endscop
}
