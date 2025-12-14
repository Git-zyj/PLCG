/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((var_0 ? var_6 : var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_0] = arr_1 [i_2];
                    arr_7 [i_2] [i_2] [i_2] = var_10;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        var_13 = (min(var_13, (((~(max(9972583467206743555, (arr_2 [i_0] [i_1] [i_3]))))))));
                        var_14 *= (min((max((arr_9 [i_1] [i_0]), (arr_2 [i_0] [i_0] [i_2]))), 14356166197033469915));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_15 = (max(var_15, (35369 < -196976009)));
                        arr_14 [i_0] [i_0] &= (((arr_13 [i_0] [i_1] [i_2]) % var_2));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_16 = 196976031;
                        arr_17 [i_0] [i_0] = var_8;
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] = ((+(max((((arr_8 [i_0] [i_6] [i_2] [i_2] [i_1] [i_0]) % 9897916777362399678)), 54205))));
                        arr_22 [i_6] [i_2] [12] [i_0] = (-6535737921533520448 ^ 26);
                        var_17 &= (arr_11 [i_2]);
                    }
                }
            }
        }
    }
    var_18 = var_11;
    #pragma endscop
}
