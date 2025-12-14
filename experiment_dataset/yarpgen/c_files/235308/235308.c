/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_10 = 1851297579627817822;
        var_11 = -84;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_12 = (min(var_12, -322240477));

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_13 += 0;
                        arr_13 [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] = 211;

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_14 = 75;
                            arr_16 [i_1] [i_1] = 0;
                            var_15 = 42;
                            var_16 |= 75;
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_17 = 55975;
                            arr_19 [i_4] [i_3] [i_2] = 9;
                            var_18 = 31;
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_19 = 90;
                            var_20 -= 8573;
                            var_21 = 0;
                        }

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_22 = 34;
                            var_23 |= 187;
                        }
                        for (int i_9 = 3; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            var_24 &= 0;
                            arr_31 [i_1] [i_2] [i_2] [i_4] [i_4] [i_2] = 179;
                            var_25 = 4561754308165394571;
                            var_26 = 221;
                        }
                        for (int i_10 = 3; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            var_27 = (-127 - 1);
                            var_28 = 0;
                        }

                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_29 = 1;
                            var_30 = 9147204528540796274;
                            var_31 = (max(var_31, 14814832344920257122));
                            arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 83;
                        }
                    }
                }
            }
        }
    }
    var_32 = var_7;
    var_33 = var_5;
    #pragma endscop
}
