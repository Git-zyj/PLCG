/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((5728 > 5728) ? var_4 : (max((~-27659), 45243))));
    var_11 = 15389082404795576050;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_12 = (min(var_12, (((var_5 >> (-5736 + 5764))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_13 = ((var_1 ? (arr_2 [i_3]) : 6931765683143633347));
                        var_14 = ((-((2843370490655156130 / (arr_5 [i_3 - 1] [i_2] [i_1])))));
                        arr_10 [i_0] [i_2] = (arr_0 [i_0] [10]);
                        arr_11 [i_2] [2] [6] [i_2] [i_3] = (((arr_1 [i_0] [i_2]) > -var_1));
                    }
                }
            }
            arr_12 [i_0] = (var_6 + var_7);
            var_15 = (((arr_9 [i_0] [i_0]) ? (arr_9 [i_0] [i_0]) : var_1));
        }
        /* vectorizable */
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_16 *= var_8;
                        var_17 = (arr_17 [i_4 + 2] [i_4] [i_4] [i_0]);
                        arr_22 [i_4] [i_4] = ((~(arr_7 [i_0] [i_4 - 4] [i_4 + 1])));
                    }
                }
            }
            var_18 &= ((((4294967295 ? 4294967295 : var_2)) * var_4));
            var_19 -= 1024;
            var_20 = var_9;
        }
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_30 [i_7] = ((((max((669108875309867097 >= 16734), ((-(arr_21 [i_0] [i_0] [i_0] [i_7])))))) + 7449948890102994761));
                        var_21 = (max(var_1, var_8));
                    }
                }
            }
        }
        var_22 = (max(var_22, 1023));
        arr_31 [i_0] = (min(-4, 15));
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_23 ^= ((((-(arr_21 [i_10] [i_10] [i_10] [i_10])))) > ((((arr_17 [i_10] [i_10] [i_10] [i_10]) && 3355744496))));
        var_24 = (-65 < 2656985910);
        arr_34 [i_10] |= var_0;
        var_25 = var_3;
    }
    var_26 = var_8;
    #pragma endscop
}
