/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_19 = 4123168604160;
                        arr_9 [i_3] [i_1 + 1] [i_3] &= var_6;
                    }
                }
            }
        }
        arr_10 [14] &= (((((~(~var_12)))) ? 2 : (arr_1 [14])));
        var_20 = (!9223372036854775807);
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {

        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_21 &= ((var_13 ? 241 : -var_8));
                        var_22 = (min(var_22, -118));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        {
                            arr_28 [i_4] [i_10] [i_4] = -235;
                            var_23 ^= var_7;
                        }
                    }
                }
            }
        }
        var_24 = (min(var_24, -118));
        var_25 |= 253;
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_26 = (((var_15 & (arr_4 [i_11] [i_12]))));
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_27 ^= var_3;
                        var_28 = (arr_6 [i_14] [i_14]);
                    }
                }
            }
            arr_38 [i_11] [i_12] [i_12] = (arr_7 [i_11] [i_11] [i_12] [i_11] [i_11]);
            var_29 = ((!(arr_30 [i_12])));
        }
        for (int i_15 = 1; i_15 < 18;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 16;i_17 += 1)
                {
                    {
                        var_30 = var_11;
                        var_31 = (max(var_31, 2147483640));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    {
                        var_32 = 65520;
                        var_33 = var_9;
                        arr_51 [i_11] = (((arr_48 [i_11] [i_15 - 1] [i_11] [i_19] [i_15]) || 1015808));
                        var_34 += (arr_50 [i_19] [i_18] [i_15] [8]);
                        arr_52 [i_19] [i_18] [i_15] [i_11] = (-29 | 0);
                    }
                }
            }
        }
        for (int i_20 = 3; i_20 < 17;i_20 += 1)
        {
            arr_55 [i_20 + 2] [15] [i_11] = -112;
            var_35 += (((4123168604146 ^ -102) ? 24 : 231));
            var_36 = (min(var_36, var_2));
        }
        for (int i_21 = 0; i_21 < 20;i_21 += 1)
        {
            arr_58 [i_21] [i_21] [i_21] = 133693440;
            var_37 |= var_12;
        }
        var_38 = (min(var_38, (arr_41 [i_11] [i_11] [i_11] [i_11])));
    }
    for (int i_22 = 2; i_22 < 23;i_22 += 1)
    {
        var_39 = (arr_6 [i_22 + 1] [i_22]);
        var_40 = ((arr_62 [i_22 + 1]) ? 99 : ((-32 | (arr_7 [i_22] [i_22 - 1] [i_22] [i_22 + 1] [i_22]))));
    }
    var_41 = ((var_15 >> ((((-3 ? 255 : (~var_12))) - 242))));
    var_42 = (min(var_42, var_0));
    /* LoopNest 2 */
    for (int i_23 = 0; i_23 < 10;i_23 += 1)
    {
        for (int i_24 = 1; i_24 < 6;i_24 += 1)
        {
            {
                arr_68 [i_24] [i_24] = var_1;
                var_43 = (arr_15 [i_23] [i_23] [i_23]);
            }
        }
    }
    #pragma endscop
}
