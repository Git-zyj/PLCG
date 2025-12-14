/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_12 = ((arr_0 [i_0]) ? (arr_1 [i_0]) : 1);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] = ((!(arr_1 [i_0])));

            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_13 = -1;
                            var_14 = (1 >= 27235);
                        }
                    }
                }
                var_15 = (~var_6);
                arr_13 [i_0] [i_0] [i_2] = ((22185 ? (((1 ? (arr_2 [i_0]) : 115))) : ((~(arr_0 [i_1])))));
            }
            var_16 = (((arr_9 [i_0] [i_1] [i_1] [i_1]) * (arr_9 [i_0] [i_0] [i_0] [10])));
        }
        var_17 -= var_7;
        var_18 = (((arr_11 [i_0] [6] [i_0] [i_0] [6] [i_0]) ^ (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] = ((309737479411533684 % var_6) * ((((-2147483647 - 1) ? var_9 : 2147483647))));
        var_19 ^= (((arr_0 [i_5]) - (arr_7 [i_5])));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = (((arr_7 [i_6]) & (1 - 100)));
        var_20 = (min(var_20, (((var_8 ? 0 : (arr_15 [i_6] [18]))))));
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_21 = 79;
        var_22 *= (((((-(arr_3 [i_7] [i_7] [i_7])))) ? (((max(62679, 33)))) : (arr_3 [i_7] [i_7] [i_7])));
        var_23 = 126;
        var_24 = (max(var_24, ((max(1, (max(((min(1, (arr_8 [i_7] [i_7] [i_7] [0])))), ((1 ? 1 : 141)))))))));
    }
    var_25 = -var_11;
    var_26 &= var_4;
    #pragma endscop
}
