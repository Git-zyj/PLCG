/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((min(var_3, var_18)))) || 12355));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = ((-(var_13 | 14)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, ((((arr_5 [i_0] [i_1] [i_0] [6]) && -15)))));
                        var_22 ^= var_4;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_11 [i_4] [i_4] = (arr_4 [i_0]);
            arr_12 [i_4] [i_0] [i_4] = 15651570101772510446;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_17 [i_0] [i_4] [i_0] [2] = ((-(var_12 <= var_12)));
                        arr_18 [i_6] [i_4] [i_4] [i_0] = var_2;
                        var_23 = -var_9;
                        arr_19 [i_4] = 676128504008438536;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_24 = (!var_6);
                        var_25 = 4072754935;
                    }
                }
            }
            var_26 = (min(var_26, ((~(arr_8 [i_0] [i_7] [i_0] [12])))));
            var_27 = (min(var_27, 576460751229681664));
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                {
                    var_28 = (((min(var_10, (max((arr_24 [i_0] [11] [i_0] [i_0]), -27179)))) & ((((arr_35 [i_0] [i_10] [i_11] [i_10]) ? (arr_10 [16]) : (4294967278 ^ 0))))));
                    var_29 = (12854904828921520584 - 4080);
                    arr_37 [i_10 + 2] [i_10 + 1] [i_0] [i_11] |= (max((((((min(var_8, 0))) || ((max(32168, 84)))))), (max(23, 6))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 17;i_13 += 1)
            {
                {
                    arr_43 [i_0] [i_0] [i_13] [i_12] = (min(32166, (var_14 <= 245760)));
                    arr_44 [i_13] [i_13] [i_13] [i_13] = var_6;
                    var_30 = (min(var_30, var_4));
                    var_31 ^= 14;
                    var_32 = (min(0, 6861158337778323314));
                }
            }
        }
        var_33 = (((arr_6 [i_0] [i_0] [i_0] [6]) > (((!var_9) ? (var_13 - 32166) : (max(1924376587, 1))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    arr_51 [i_0] [i_15] [i_14] = (((arr_41 [i_0] [i_0] [i_0] [i_0]) < 0));
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 17;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            {
                                arr_59 [i_17] [i_16 + 1] [i_14] [i_14] [i_14] [i_0] = (min(var_12, (~18446744073709551615)));
                                var_34 -= (max((var_6 > 12854904828921520584), (4294967290 >= 192)));
                                var_35 *= 5955;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
