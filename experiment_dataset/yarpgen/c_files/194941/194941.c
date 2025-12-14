/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(!0)));
    var_12 = var_3;
    var_13 &= (min(1205212375, 1205212390));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 2] = (arr_0 [2]);
        var_14 = (min(((~(arr_1 [i_0 + 1]))), var_7));
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = var_10;
        arr_8 [i_1] |= (min((~1), ((~(arr_6 [i_1] [i_1])))));
        arr_9 [i_1] [i_1] = (min(15035, -984253856));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] = (max(((max(((48635 / (arr_10 [i_2]))), 1))), (((min(9606288652782382459, 1)) | (((var_8 ? (arr_11 [i_2 - 2]) : var_1)))))));

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_19 [i_4] [i_3] [i_2] = ((min(((var_2 ? var_7 : (arr_16 [i_4]))), 54)));

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_16 = var_6;
                    arr_22 [17] = (541299532 ? 1 : 119);
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_17 = (max(var_17, 0));
                    var_18 += (~16900);
                }
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    arr_27 [i_2 + 2] [i_4] [i_7] = (((max((~107), 6238522397195370426)) >= 1));

                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        arr_32 [i_2 + 1] [i_3] [i_4] [i_4] [i_8] = 6;
                        var_19 = var_7;
                        arr_33 [i_2] [i_3] [i_2] [i_7] [i_8 - 1] &= (~0);
                    }
                }
                var_20 *= (~var_4);
                var_21 += ((((var_2 ? (arr_31 [i_2 + 1] [i_3 + 3] [i_2] [i_2 + 1] [i_2 - 1]) : 0)) % 28516));
            }
            for (int i_9 = 4; i_9 < 21;i_9 += 1)
            {
                arr_38 [i_9 + 1] = 1;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_22 = (arr_31 [i_2] [i_3] [22] [22] [i_11 + 1]);
                            var_23 &= ((!(arr_31 [i_2] [i_3] [i_9] [i_10] [1])));
                            var_24 += var_7;
                        }
                    }
                }
                arr_44 [i_9] [i_9] [i_3] [i_2 + 1] = (((-(arr_16 [i_9]))));
            }
            for (int i_12 = 2; i_12 < 21;i_12 += 1)
            {
                var_25 = (arr_21 [i_2] [i_2] [i_2 - 1] [i_2] [i_2 + 2]);
                var_26 = (((arr_39 [i_3] [i_2]) * (((((!(arr_26 [i_12] [i_2] [i_3] [i_3] [i_2] [i_2]))))))));
                arr_48 [i_2] = -2147483644;
            }
            var_27 += (((max((min(-1139681822949309986, 237224303)), ((min(2147483647, (arr_20 [14] [14] [i_2 + 1] [i_3 + 2]))))))) && (arr_24 [i_3 + 1] [i_3] [i_3] [i_3] [i_2]));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_52 [i_13] [i_13] [i_13] = ((max(0, 26)));
            arr_53 [i_13] [i_13] [4] = (((max(238, 140))));
            arr_54 [i_13] [i_13] [i_2 - 2] = 120;
        }
        var_28 -= var_7;
        var_29 = ((((max(var_4, (max(var_2, 1))))) ? 47642 : ((+((((arr_49 [i_2] [i_2] [i_2]) <= (arr_13 [i_2 + 1] [i_2 + 1] [i_2]))))))));
        arr_55 [i_2 + 1] = (((arr_40 [i_2 - 2] [i_2] [i_2] [i_2]) == 0));
    }
    #pragma endscop
}
