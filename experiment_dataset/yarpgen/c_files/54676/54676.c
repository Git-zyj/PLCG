/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = 0;
        arr_4 [i_0] = ((((var_14 ? var_6 : var_14)) >> (var_12 - 22132)));
        var_15 = var_13;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_16 = (arr_0 [i_1 - 4]);
            arr_10 [i_1] [i_2] = var_4;
            var_17 = 118;
            var_18 *= (var_11 - ((var_4 ? var_14 : -437615335)));

            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {
                var_19 *= var_7;
                arr_14 [i_1] [i_1] [7] [i_1] = ((var_13 ? 1 : (var_13 - 1)));
                var_20 = ((var_9 ? var_10 : (arr_5 [i_1])));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
            {
                var_21 &= (((((var_13 + 2147483647) >> (var_0 - 3062099062))) >= (arr_13 [i_1 + 1] [i_1 - 1] [4] [i_1])));
                arr_19 [i_1] [i_4] [8] [i_1] &= var_8;

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_22 [i_1 - 3] [i_1 - 3] [i_4] [i_2] [1] [i_1] = (1 ? var_1 : (arr_5 [i_1]));

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_26 [i_1] [i_2] = ((-2147483629 ? -46957 : var_6));
                        var_22 *= (-31079 * 1);
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_23 ^= var_12;
                        arr_29 [i_2] [3] [i_4] [i_1] [i_7] = ((2576757264 >> (var_4 >= var_10)));
                        arr_30 [i_1] [i_1] [i_1] [i_1] [i_5] [6] = (((0 || 101) && 2147483635));
                    }
                }
            }
        }
        var_24 &= (((12950 ? 65535 : 2739113128)) >> (var_14 - 3799644537));
        var_25 |= 101;
    }
    var_26 = ((((((var_1 ? var_2 : var_3))) ? var_4 : ((1 << (var_5 - 101))))));
    var_27 = (max((var_5 - var_12), -2147483640));
    #pragma endscop
}
