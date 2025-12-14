/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((-var_10 ? ((((!((min(3344217316178659795, 1))))))) : var_5)))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = (max(var_12, ((((min(-698399840, -64)) / var_0)))));
        var_13 -= (!var_2);
        var_14 -= 32617;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_8 [i_1] [i_1] [i_1] = (((((((-62 != (arr_1 [i_0 - 1] [i_2])))))) ? (!var_3) : (arr_0 [8] [i_0])));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_3] [i_4] = (arr_0 [i_0 - 1] [i_0 + 1]);
                        var_15 = (max(var_15, -50));
                        var_16 = (arr_4 [i_0] [i_0] [i_4]);
                        var_17 += var_2;
                    }
                    var_18 = ((~((109 * (arr_6 [i_1] [i_2] [i_1] [i_1])))));
                    var_19 = ((!(arr_0 [i_0 + 1] [i_0])));
                    var_20 += ((28 ? 0 : 2592849472));
                    arr_14 [i_0] [i_1] [1] [i_1] [1] [i_3] = (arr_3 [i_0 - 1] [i_3]);
                }

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_18 [i_1] [i_2] [i_2] [i_2] = (((((~var_7) % (((max(3, -64)))))) <= ((((min(var_8, var_5)))))));
                    arr_19 [i_5] [i_5] &= ((-((min(var_4, 1)))));
                }
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_21 = (min(var_21, (((var_0 / (arr_5 [8] [i_0 - 1] [i_1]))))));

                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    var_22 ^= 174455813;
                    var_23 = (arr_9 [i_1] [i_1] [i_7]);
                    var_24 &= ((((arr_21 [i_0] [3] [i_6]) % 1180834283)));
                    var_25 += ((~(arr_10 [i_0 + 2] [i_0 - 1] [1] [i_7 + 2] [i_7 + 1])));
                }
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_26 = (max(var_26, var_8));

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_27 += var_0;
                    arr_33 [i_0 - 1] [i_1] [i_1] [i_9] = ((~(arr_20 [i_0 + 2] [i_0 - 1])));
                }
            }
            var_28 = max(-1537464059299059927, -1180834283);

            for (int i_10 = 3; i_10 < 14;i_10 += 1)
            {
                var_29 = ((max(var_7, (arr_1 [i_0 - 1] [i_0 + 2]))));
                var_30 -= ((!((max(-48, var_0)))));
                var_31 += var_1;
                var_32 = (arr_10 [i_10 - 2] [i_10 - 2] [i_0] [i_1] [i_0]);
            }
            /* vectorizable */
            for (int i_11 = 3; i_11 < 13;i_11 += 1)
            {
                arr_41 [i_1] [i_1] [6] = (arr_34 [i_1] [i_1] [i_11] [i_1]);
                arr_42 [i_0] [14] [14] [i_0] &= var_3;
            }
            var_33 = (max(var_33, ((min(1, 4294967269)))));
        }
        var_34 *= (~0);
    }
    var_35 ^= var_5;
    var_36 *= (min(47, (min(var_5, (~22700)))));
    var_37 += var_5;
    #pragma endscop
}
