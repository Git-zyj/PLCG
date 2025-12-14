/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = ((-(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_16 = arr_1 [i_3];
                            var_17 = (max(var_17, 2662206512695653328));
                            arr_12 [i_0] [i_2] [i_2] [i_4] = (min(var_13, ((3214400924287524972 ? 16725968312721540789 : var_0))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] &= var_1;
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            var_18 = arr_0 [i_2] [i_2];
                            var_19 = (((arr_14 [i_2] [i_2] [8] [i_2] [i_2] [i_2]) ? var_3 : var_12));
                            arr_17 [i_3] [i_3] &= 139611588448485376;
                            var_20 ^= ((13514304974139215311 + (arr_14 [i_3] [i_5] [i_5] [i_5 - 3] [i_3] [i_3])));
                        }
                        var_21 = (max(var_21, var_7));
                        arr_18 [i_2] [i_2] [i_1 - 1] [i_1] [i_0] [i_2] = (arr_3 [i_0] [i_0]);
                    }
                }
            }
        }
        arr_19 [i_0] &= (((13049560669396310985 ^ var_4) ? 21248 : ((var_3 ? var_5 : var_5))));
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 16;i_8 += 1)
            {
                {
                    var_22 += 288230376151707648;
                    var_23 = (arr_2 [i_7] [i_8]);
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            arr_32 [i_6] [i_9] = (!var_12);
            arr_33 [i_9] = var_5;
        }

        /* vectorizable */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            arr_37 [i_10] [i_10] = ((var_7 == (((!(arr_21 [i_6] [i_10]))))));
            arr_38 [i_6] [i_10] = var_0;
        }
        arr_39 [i_6] = (((var_7 < (arr_34 [i_6 + 1] [i_6 - 2]))) ? (arr_2 [i_6] [i_6]) : var_0);
        arr_40 [i_6] = (arr_7 [2] [i_6] [i_6] [i_6 - 2]);
    }
    for (int i_11 = 2; i_11 < 17;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        var_24 = 11870045100897650267;
                        var_25 |= min((max((max((arr_35 [12]), var_4)), (var_9 <= 56098))), (min(288230376151707661, (var_6 < 12233014198004578208))));
                    }
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        arr_53 [i_15] [i_11] [i_11] = var_3;
                        var_26 = var_1;
                    }
                    for (int i_16 = 1; i_16 < 17;i_16 += 1)
                    {
                        var_27 = (max(((~(~var_4))), (((((288230376151707648 ? var_7 : (arr_26 [i_16] [i_12] [i_13]))) != -var_7)))));
                        arr_58 [i_11] [i_11] [i_11] [i_16] [i_11] [i_16] = 18158513697557843944;
                        arr_59 [i_16] [i_16] [i_13] [i_16] [i_16] = max((min((min(var_10, 288230376151707661)), (((var_3 ? var_6 : var_11))))), (((arr_9 [i_11] [i_12 - 1] [i_13] [i_16]) ? (var_11 & 554153860399104) : (arr_23 [i_11]))));
                        var_28 += (min(((max(var_5, var_5))), (arr_27 [i_11 + 1] [i_11 + 1] [i_12 + 1])));
                    }
                    var_29 = 1920;
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 18;i_18 += 1)
                        {
                            {
                                var_30 = (arr_26 [i_18] [i_12] [i_18]);
                                var_31 = (562949819203584 ? (max(((288230376151707648 ? var_0 : var_3)), (arr_42 [i_11]))) : 34239);
                                var_32 += arr_24 [i_17] [i_17] [i_13];
                            }
                        }
                    }
                    arr_66 [i_11] [i_11] [11] = arr_41 [2];
                }
            }
        }
        var_33 = (max(var_33, (arr_3 [11] [i_11])));
        var_34 = (max(var_34, (((((70368744177600 ? (arr_1 [i_11 - 2]) : ((-(arr_31 [i_11])))))) ? 67645734912 : 66571993088))));
        var_35 = var_4;
    }
    for (int i_19 = 2; i_19 < 17;i_19 += 1) /* same iter space */
    {
        arr_70 [i_19] [14] |= 67645734912;
        var_36 = (((19614 != (max(var_3, 288230376151707661)))));
    }
    var_37 *= var_13;
    #pragma endscop
}
