/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 = var_8;
    var_20 = (min(28690, 28690));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_21 = (!(arr_4 [i_0] [i_0] [i_0]));
            arr_6 [i_0] [i_0] = 1;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_0] [i_0] [4] &= (((((~(0 & 1)))) ? (arr_1 [i_0]) : var_6));

            for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_0] = ((1 ? 841621814 : 0));
                    var_22 = ((((((min(var_2, 3373310987)) | ((((arr_0 [i_0] [i_0]) ? 1 : (arr_13 [i_4] [i_0]))))))) ? (arr_2 [14]) : ((min((arr_15 [i_0] [i_3 - 1] [i_4] [i_4] [i_4 + 2] [i_4]), (arr_14 [1] [i_3 - 1] [1] [1] [i_4 + 2] [i_0]))))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = (((1 - 1) * (((~var_2) ? ((1 ? 0 : (arr_2 [i_2]))) : 61064))));
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_23 = (!(arr_7 [i_0] [i_0] [i_0]));
                    arr_20 [i_0] [i_0] [i_0] [i_5] [1] [i_0] = ((-(61064 - var_14)));
                    var_24 = (max(var_24, ((((4186112 | 50656) && 1)))));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_25 = ((((!(arr_8 [i_2] [1]))) ? var_0 : (arr_19 [i_0] [i_2] [i_0] [i_6])));
                    var_26 *= -424332004;
                    arr_25 [i_0] [i_0] [i_3] [i_0] = ((1152791877 ? 335879479 : 335879479));
                    arr_26 [i_3] [1] [i_0] [i_3] = 0;
                }
                arr_27 [i_0] [i_3] [4] = min(((((min((arr_9 [i_3]), var_8))) && (arr_21 [i_0]))), var_8);
                arr_28 [i_0] [i_0] [10] [i_0] = ((arr_13 [i_0] [i_0]) ? 59416 : (min((~36846), 6106)));
                arr_29 [i_3] [i_3] [i_3] [i_0] = 1;
            }
            for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
            {
                arr_32 [i_0] [i_0] [i_0] [i_0] = (min((((~0) ? (arr_2 [i_7 - 1]) : ((78684825 ? 806209109 : (arr_8 [i_0] [i_0]))))), (((arr_24 [i_0] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_0]) ? (arr_19 [i_0] [i_0] [i_0] [i_0]) : (arr_19 [i_7] [i_7 - 1] [i_0] [i_7 - 1])))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_27 = -424332017;
                            arr_38 [i_0] [i_7] [8] &= 2047;
                            arr_39 [1] [i_0] = (!2392250464);
                            arr_40 [i_0] [i_0] [i_7] [i_0] [i_0] = (min((arr_33 [i_0] [i_0]), (arr_13 [i_8] [i_0])));
                            var_28 = (((((~(arr_1 [i_7 - 1])))) ? (min((~var_10), (arr_14 [i_9] [i_9] [i_9] [i_9 - 3] [i_9 - 1] [i_0]))) : (min((arr_35 [i_0] [i_7 - 1]), var_11))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
            {
                var_29 = 1;
                var_30 = 1;
            }
            /* vectorizable */
            for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
            {
                arr_47 [i_0] [i_0] [i_0] [i_0] = var_11;
                var_31 = (1 + 0);
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 17;i_13 += 1)
            {
                {
                    arr_54 [i_0] = ((((min((arr_22 [i_0] [3] [3] [4] [i_0]), (arr_41 [i_13] [i_13 - 2] [i_13 - 1])))) ? 1 : (arr_37 [i_0] [i_0] [i_13] [i_12] [i_0] [12] [i_12])));
                    var_32 = (((var_9 || var_11) ? (~var_9) : -1081180859));
                    var_33 = (min(var_33, (~var_16)));
                    var_34 = min((((!((((arr_33 [i_0] [i_12]) & 43949)))))), (min((~1), ((var_2 ? (arr_50 [i_13] [i_0]) : 1)))));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_58 [15] [15] = ((1693088551 ^ (((3507880904 ? (arr_14 [i_14] [i_14] [1] [i_14] [1] [1]) : (((arr_35 [6] [i_14]) ? 8881 : 1)))))));
        arr_59 [1] [i_14] = ((arr_5 [2] [2] [i_14]) ^ var_2);
        arr_60 [i_14] = (min(((1234797 ? (arr_35 [6] [i_14]) : (arr_35 [10] [i_14]))), (((arr_35 [12] [i_14]) ? (arr_35 [8] [i_14]) : (arr_35 [14] [i_14])))));
        var_35 -= (min(((min((arr_31 [i_14] [i_14] [i_14] [i_14]), var_11))), (((arr_31 [i_14] [19] [i_14] [i_14]) ? var_0 : var_7))));
    }
    #pragma endscop
}
