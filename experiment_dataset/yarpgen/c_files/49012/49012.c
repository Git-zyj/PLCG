/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((-(min((max(var_13, var_11)), ((max(-31366, var_10)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] = (min((min(((min(1476253011, (arr_5 [i_3])))), var_3)), ((var_2 ? (min(var_12, var_6)) : var_14))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_18 = (!var_12);
                            var_19 = arr_6 [i_3];
                        }
                        arr_16 [i_1] = (~var_6);
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_19 [i_1] [i_1] [i_2] [i_5] = var_7;
                        arr_20 [i_0] [i_1] [i_0] [i_2] [i_5] [i_5] = (arr_7 [i_2 - 1] [i_1] [i_2 + 2] [i_2]);
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_23 [i_1] = var_1;
                        var_20 = (max(var_20, (arr_7 [i_6] [12] [12] [12])));
                        var_21 *= min((max(var_16, 11367452930438063551)), ((min(-19835, (arr_8 [i_2] [i_2 - 3] [i_2 + 2])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_22 = (min(var_22, var_14));
                        arr_27 [i_0] [i_1] [i_2] [i_1] = ((4088 < (arr_1 [i_2 - 2] [i_1])));
                        var_23 = (max(var_23, (arr_2 [i_0] [i_7])));
                    }
                    var_24 = (min((((min((arr_17 [i_1] [i_1]), (arr_2 [i_0] [i_0]))))), (min(((min(1, (arr_8 [i_0] [i_1] [i_2])))), 18446744073709551615))));
                    arr_28 [i_0] [i_0] [i_1] = (max((((1 | -8935145527781255363) ? var_12 : (((~(arr_9 [i_0] [i_0] [i_1] [i_2])))))), var_14));
                    var_25 *= (min(((-(arr_21 [i_0] [i_1] [i_2 + 1] [i_1]))), (((var_8 + 2147483647) >> (103 - 89)))));
                }
            }
        }
    }
    #pragma endscop
}
