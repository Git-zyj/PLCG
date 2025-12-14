/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = (((arr_0 [i_2] [i_1]) % (((((arr_4 [i_0]) ^ (arr_4 [i_0]))) ^ ((min(var_14, var_12)))))));
                    var_17 = (((arr_3 [i_0] [i_1]) << ((((max(var_4, (min(var_11, 19461))))) - 65463))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_0] [i_3] [i_2] [i_3 - 1] = var_6;

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_18 = (min(var_18, (arr_2 [i_1] [i_1])));
                            var_19 = (min(var_19, var_12));
                            var_20 = (arr_6 [i_0 + 1] [i_2] [i_4]);
                        }
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            arr_17 [i_0] [i_3] [i_2] [i_3] [i_0] [i_0] [i_0 - 1] = 127;
                            arr_18 [i_5 + 2] [i_3] [i_5 + 2] [i_3] [i_5] [i_3] = (arr_1 [i_0] [i_0]);
                            var_21 = arr_15 [i_3] [i_3] [i_2] [i_3] [12] [i_3] [i_5];
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_22 *= (-113 < var_10);
                            var_23 ^= (((71 << (var_7 - 155829311))));
                            var_24 = ((var_9 <= (arr_10 [i_3] [i_3] [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3])));
                            var_25 *= (!var_3);
                        }
                        var_26 = (max(var_26, (arr_8 [i_0 - 1] [i_3 + 2] [16] [i_3 + 2])));
                        var_27 = (min(var_27, -106));
                        var_28 ^= (arr_2 [i_1] [i_3 + 1]);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            var_29 = (max(252, (((!((min(var_13, var_10))))))));
                            arr_28 [i_7] [i_1] [i_2] = (min(65520, -115));
                        }

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_32 [i_7] [i_1] [i_1] [19] = var_13;
                            var_30 -= ((var_3 >> (((min(33554400, -931233822)) - 33554389))));
                            arr_33 [i_0] [i_7] [i_2] [i_7] [i_0] = min((arr_25 [23] [i_1] [i_1]), ((~(max(3883649236853066942, var_13)))));
                            var_31 = ((((((min(4688, -116))) ^ ((41452 >> (107 - 96))))) != -2263));
                        }
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_32 = (max(var_12, (min((var_8 % 26809), 3883649236853066949))));
                        var_33 -= (min(((((((!(arr_26 [i_10] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0])))) << ((max((arr_30 [i_0] [i_1] [i_1] [i_10]), (arr_30 [i_0] [i_1] [i_2] [i_10]))))))), (max(6, 3100))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 16;i_12 += 1)
        {
            {
                arr_42 [i_12] = (i_12 % 2 == 0) ? (min((((((((~(arr_26 [i_11] [i_11] [i_12] [i_11] [i_11] [i_11] [i_11]))) + 2147483647)) << (((((var_15 || (arr_10 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))) - 1))))), (min(8450355318455504831, var_14)))) : (min((((((((((~(arr_26 [i_11] [i_11] [i_12] [i_11] [i_11] [i_11] [i_11]))) - 2147483647)) + 2147483647)) << (((((var_15 || (arr_10 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))) - 1))))), (min(8450355318455504831, var_14))));
                var_34 = (max((((((65535 || (arr_22 [i_11] [i_12] [i_11] [i_11] [10]))) && var_13))), (max(41452, ((min(1, 3406)))))));
            }
        }
    }
    var_35 = (max(-32756, 62437));
    var_36 = var_7;
    #pragma endscop
}
