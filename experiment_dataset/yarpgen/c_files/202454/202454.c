/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (arr_1 [i_1 - 3] [i_0]);
                arr_6 [i_0] [i_0] = (max((arr_0 [i_1 - 3] [18]), (arr_0 [i_1 - 2] [i_0])));
                var_11 = (min(var_11, (((!(-9223372036854775807 - 1))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_12 = 47027;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_13 = (min(var_13, var_1));
                    var_14 ^= ((23 ? (-9223372036854775807 - 1) : ((var_1 ? 45 : ((23 ? -2103714636691521559 : 21))))));
                    arr_15 [i_2] [i_2] = (-9223372036854775807 - 1);
                    var_15 = (max(var_15, (!var_9)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 24;i_5 += 1)
    {
        var_16 -= var_9;
        var_17 = ((((9223372036854775796 ? 18147 : 9461227607037434875)) ^ (((~(arr_17 [i_5 - 1] [i_5]))))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        arr_26 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_8] [i_7] = (((-(arr_23 [11] [1] [i_7] [13]))));
                        var_18 = (min(var_18, ((+(((arr_18 [i_5 + 1] [i_5 + 1] [i_5 - 1]) ? var_2 : 3302258958051364619))))));
                        var_19 = (max(var_19, (arr_19 [i_8] [i_5 + 1] [i_5])));
                        var_20 = (!255);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 23;i_10 += 1)
            {
                {
                    arr_33 [5] [i_9] [7] = 18475;
                    var_21 -= (18475 - 9223372036854775807);
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 16;i_11 += 1)
    {
        arr_38 [5] = ((((50191 * (var_4 > 3302258958051364619))) + ((((arr_18 [i_11 + 1] [i_11] [i_11]) > 1807342525)))));
        var_22 -= (!3131336710077684241);
        arr_39 [13] [i_11] = 164;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    {
                        var_23 = (9223372036854775807 <= 47);
                        var_24 -= ((var_4 ? (!9461227607037434875) : (((arr_47 [4] [4] [i_14]) ? ((((!(arr_3 [i_11]))))) : (arr_35 [i_11 - 1])))));
                        arr_48 [11] [i_12] [3] = var_1;
                    }
                }
            }
        }
        var_25 = (1659578655050643838 ^ 1);
    }
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        var_26 = (max(var_26, 1411414376));
        var_27 = var_2;

        /* vectorizable */
        for (int i_16 = 2; i_16 < 19;i_16 += 1)
        {
            var_28 = (arr_23 [i_16 + 1] [i_15] [i_15] [5]);
            arr_53 [i_15] = ((var_0 | ((8985516466672116734 ? var_5 : 2896586023384004435))));
            arr_54 [i_15] |= var_5;
        }
        /* vectorizable */
        for (int i_17 = 2; i_17 < 19;i_17 += 1)
        {
            var_29 |= (arr_29 [i_15] [i_17] [i_17] [18]);
            arr_57 [i_15] [i_17 - 1] = (arr_51 [i_15] [i_17]);
        }
        for (int i_18 = 4; i_18 < 22;i_18 += 1) /* same iter space */
        {

            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                var_30 = ((-((-(arr_16 [i_15])))));
                arr_62 [i_15] = ((9223372036854775807 ? 18446744073709551615 : 1));
            }
            arr_63 [i_15] [i_15] [i_18] = ((91 ? 108 : 58711));
        }
        for (int i_20 = 4; i_20 < 22;i_20 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_21 = 4; i_21 < 19;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 23;i_22 += 1)
                {
                    {
                        arr_76 [i_15] [9] [i_15] [20] = var_8;
                        arr_77 [i_15] [i_15] [i_20 - 2] [i_21] [i_22] = (arr_75 [i_15] [i_15]);
                    }
                }
            }
            var_31 &= 45;
            var_32 = (max(var_32, (((9461227607037434891 >= (arr_51 [13] [i_20 + 1]))))));
            arr_78 [i_15] = 2377153529347031083;
        }
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 0;i_23 += 1)
        {
            for (int i_24 = 3; i_24 < 22;i_24 += 1)
            {
                {
                    var_33 -= (1341558839 || 0);
                    arr_83 [1] [i_15] [i_15] = (1 / 65535);
                }
            }
        }
    }
    var_34 = (max(123, 18446744073709551615));
    #pragma endscop
}
