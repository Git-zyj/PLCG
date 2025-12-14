/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!(!34)));
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    var_16 = 56;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_17 = ((var_6 ? (arr_7 [i_1]) : (((((arr_13 [i_1] [i_1]) == var_11))))));
                        var_18 = (((arr_10 [i_1] [i_2] [i_2] [i_1]) || 53336));
                        var_19 ^= (((~var_11) ? var_2 : 84394951));
                        arr_18 [i_1] [i_2] [i_3] [i_4] = (arr_11 [i_2] [i_2] [i_2]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_20 = ((12969128601387940136 >> (22094 - 22054)));
                        arr_23 [i_1] = (((arr_20 [i_1] [i_5] [i_5]) ? (arr_21 [i_2] [i_2]) : ((12200 ? 100663296 : 84394951))));
                    }
                }
            }
            arr_24 [i_2] [i_2] [i_2] = ((!(arr_6 [i_2])));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_21 -= (arr_13 [i_1] [i_7]);
            arr_27 [i_7] = (var_3 ? -1427428494 : -var_15);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    {
                        var_22 &= (+-13600302063330760756);
                        arr_34 [i_1] [i_7] [i_1] [i_7] [i_7] = 65535;
                        var_23 *= var_5;
                        var_24 = 0;

                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_25 = (arr_36 [i_7]);
                            var_26 ^= ((var_13 ? var_11 : (arr_20 [i_10] [i_9 + 1] [i_8])));
                            var_27 += (!2949461496);
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_28 |= (((arr_39 [i_8] [i_9 + 3] [i_9 + 3] [i_11] [i_11]) ^ (arr_14 [i_9 + 2] [i_7] [i_7] [i_1])));
                            var_29 = 179;
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            arr_44 [i_1] [i_7] [i_8] [i_7] [i_7] [i_12] = (((arr_21 [i_9 + 3] [i_9 + 3]) * (((!(arr_12 [i_8] [i_9] [i_12]))))));
                            var_30 = 35;
                        }
                    }
                }
            }
            var_31 ^= (arr_21 [i_1] [i_1]);
        }
        var_32 = ((~(arr_29 [i_1] [i_1] [i_1])));
        arr_45 [i_1] [i_1] = 1035793143;
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                {
                    var_33 -= (arr_52 [i_13] [i_13] [i_13]);
                    arr_53 [i_13] [i_13] [i_15] = var_5;
                    var_34 = 2949461525;
                }
            }
        }
    }
    var_35 = var_7;
    #pragma endscop
}
