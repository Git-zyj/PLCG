/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [7] = (((arr_0 [i_0] [i_0]) >= 14173019306580659327));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_1] = (~var_7);
                        var_13 = ((!(1 ^ 1)));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = ((arr_10 [i_1 - 1] [i_1 + 1]) ? (arr_4 [i_2] [i_1 + 1]) : var_8);
                    }
                }
            }
            var_14 = 134217728;
        }
        var_15 = (max(var_15, -2146816476147720373));
        var_16 ^= ((var_7 ? -17020 : 31182));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_17 &= (var_6 + var_9);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    {
                        var_18 *= ((18014398509481984 ? (arr_19 [i_5] [i_6] [i_7 + 1] [i_7 - 1]) : var_4));
                        var_19 = -1;
                    }
                }
            }
        }
        var_20 = (min(var_20, ((((((-49 ? 1152851135862669312 : 52687))) || var_11)))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    arr_29 [i_8] = ((-(arr_22 [i_8 + 2] [i_8] [i_8 + 1] [i_8 - 1])));
                    arr_30 [i_8] = ((3223486879 + (arr_25 [i_8] [i_8])));
                    arr_31 [i_9] [i_8] [i_9] = (arr_5 [i_4] [i_4] [i_9]);
                    var_21 = (((arr_23 [i_4] [i_4]) | var_12));
                }
            }
        }
    }
    var_22 = (var_6 ? var_8 : (max(-1152851135862669312, ((min(var_2, var_9))))));
    var_23 = (min(-1152851135862669313, var_3));
    var_24 ^= var_11;
    var_25 = (~var_10);
    #pragma endscop
}
