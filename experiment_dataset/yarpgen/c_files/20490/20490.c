/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 16228748445767846449;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = (min(var_16, (((1 ? 32767 : var_2)))));
        arr_2 [8] [8] &= (arr_0 [6]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 = var_8;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_18 = 3995625986;
                        arr_14 [i_3] [i_3] [i_2] [i_3] = ((299341319 ? (arr_3 [i_2]) : (arr_3 [i_1])));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_19 += ((!(arr_9 [i_1] [i_2])));
                            var_20 -= (((arr_18 [i_1]) ? 255 : (arr_18 [i_1])));
                        }
                        for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_21 [16] [i_2] [i_3] = (arr_9 [i_6 - 1] [13]);
                            var_21 ^= ((95 ? 140323748156996100 : 2217995627941705166));
                            arr_22 [i_1] [i_2] [i_3] [i_3] = (((arr_19 [i_6] [i_6] [i_3] [i_3] [i_2] [1]) + 175656254));
                        }
                        for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_26 [13] [i_2] [i_3] [13] [16] = ((+(((-46 + 2147483647) >> 0))));
                            arr_27 [i_3] = (((arr_15 [i_2] [1] [i_4] [i_7 + 1] [i_2] [i_4] [i_7]) ? 9223372036854775807 : (arr_20 [i_7 - 1] [i_7] [i_7] [i_7 + 2] [i_7 + 1])));
                            var_22 ^= var_0;
                        }
                    }
                }
            }
        }
        var_23 = (min(var_23, ((((arr_4 [i_1] [i_1]) % var_11)))));
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 16;i_8 += 1)
    {
        arr_32 [i_8] = (((var_6 * 29156) ? var_14 : (arr_5 [i_8 - 1])));
        var_24 += (~4203291165);
        arr_33 [4] |= (4986486247287035121 ? var_11 : 175656236);
        arr_34 [i_8] [i_8] = ((((((arr_3 [i_8]) ? (arr_24 [15] [i_8] [i_8]) : -785070023))) ? var_13 : (((arr_24 [4] [i_8] [i_8]) - 1))));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 24;i_11 += 1)
            {
                {
                    var_25 = ((((((arr_35 [i_10]) ? (3692829215 < 112) : 32767))) - ((max(192, -885100125)))));
                    var_26 &= ((max(4096931978, (arr_35 [i_11 - 2]))));
                }
            }
        }
    }
    var_27 = (min(112, 2578086485));
    #pragma endscop
}
