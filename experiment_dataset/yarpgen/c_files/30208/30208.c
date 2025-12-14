/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] = ((arr_0 [i_1 - 2]) ? 1 : ((1 ? (arr_4 [i_1 + 1] [i_1 - 1]) : (arr_1 [i_0 + 1] [i_1]))));
            arr_7 [i_0] [i_0] = ((arr_5 [i_0 + 1] [i_0]) >= ((1 ? 1 : 1)));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_12 [i_0] [9] [i_1] [i_0] = ((-(!-1832647058)));
                    var_10 = ((arr_2 [i_1 - 2]) - ((2147483626 << (1 - 1))));
                    var_11 *= (arr_5 [i_1] [i_3]);
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_12 = (~-var_4);
                    var_13 ^= (1 || var_5);
                    var_14 *= (-var_1 ? var_4 : (arr_5 [i_0] [i_1]));
                }
                for (int i_5 = 4; i_5 < 17;i_5 += 1)
                {
                    var_15 = (((arr_10 [i_0 + 1] [i_0] [i_0 + 1]) ? (arr_14 [i_0 + 1] [i_0 + 1]) : 33415685));
                    arr_19 [18] [i_1 - 2] [i_1 - 2] [i_0] [i_1 - 1] = ((arr_13 [i_1 - 1] [i_0 + 1] [i_5 + 1] [i_0]) ^ ((var_0 ^ (arr_18 [8] [i_1]))));

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_22 [i_0] [i_5] [i_0] [i_5] [i_6] [i_0 + 1] |= (arr_4 [i_0 + 1] [i_1 - 2]);
                        arr_23 [i_0] = 32767;
                        var_16 ^= arr_4 [i_2] [i_1];
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_17 = ((-(arr_24 [i_0 + 1] [i_1 + 1] [i_2] [i_5])));
                        arr_27 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = 19575;
                        var_18 = ((!(-2147483647 - 1)));
                        var_19 = ((arr_17 [9] [9] [9] [i_0]) >> (-var_6 + 17021));
                        var_20 ^= (~19712);
                    }
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_21 = ((var_3 && (((-1 % (arr_25 [i_0] [i_0] [i_0] [i_2] [i_8] [i_0]))))));
                    var_22 = (arr_9 [i_0] [i_2]);
                    arr_31 [i_0] = var_8;
                }
                var_23 = ((var_1 != (arr_9 [i_1 + 1] [i_0 + 1])));
                var_24 *= 10766;
            }
            var_25 = (arr_0 [i_0]);
        }
        arr_32 [i_0] = var_6;
    }
    var_26 = (min(var_26, var_6));
    #pragma endscop
}
