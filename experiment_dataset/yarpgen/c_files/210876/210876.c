/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((~((min((arr_0 [i_0] [i_0]), var_1)))));
        arr_3 [i_0] = ((~((min((arr_2 [i_0]), 1)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_14 = -var_5;
                var_15 = (min(var_15, (((arr_2 [i_0]) >= (((!(arr_7 [i_0] [i_1] [i_2]))))))));
            }
            var_16 ^= ((~(((62 ? var_4 : (arr_1 [i_0]))))));
            var_17 = (min(((((arr_4 [i_0] [i_1]) && (((-(arr_8 [1] [i_0]))))))), -1));
            var_18 = (min(var_18, (((((max((-127 - 1), 118))) ? ((min(var_8, (min(var_8, (arr_8 [i_0] [1])))))) : (((~1) + (var_5 <= 1))))))));
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (min((~1), ((min(-36, var_12)))));

        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            arr_16 [i_3] = -1;
            var_19 = (min(var_19, (((-((min(1, 1))))))));
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_20 = -1;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {

                    for (int i_8 = 3; i_8 < 15;i_8 += 1)
                    {
                        arr_28 [i_8] [1] [2] &= (1 >= 1);
                        var_21 = 0;
                        var_22 &= (!1);
                        var_23 *= (arr_20 [i_6 - 1] [i_8] [i_8]);
                        var_24 = 1;
                    }
                    var_25 = (((1 ? -64 : 1)));

                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        arr_32 [i_5] [i_7] = ((-(arr_26 [i_5] [i_5] [i_6] [i_6 + 3] [i_5] [i_9])));
                        var_26 ^= (((arr_31 [i_6] [i_6] [i_6 + 4]) ^ -1));
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_27 = (!-70);
                        var_28 = (!var_3);
                    }
                }
            }
        }
        arr_35 [i_5] = (1 >= 1);
        var_29 = var_6;
        arr_36 [i_5] [i_5] = (~var_0);
    }
    var_30 = (max(var_30, (((+(((((-127 - 1) ? 43 : 127)))))))));
    var_31 = ((+(((0 && 2) ? 0 : ((min(var_4, var_7)))))));
    var_32 = var_2;
    #pragma endscop
}
