/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 255;
        var_18 ^= var_10;
        arr_3 [i_0] = (arr_0 [8]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_19 = (((arr_4 [i_1]) ? -8 : (((14 ? 0 : 0)))));
        var_20 = var_1;
        var_21 = ((((7650081736970985617 ? 2 : 30709))) ? var_5 : 255);
        arr_6 [i_1] = ((-(arr_5 [i_1])));
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_22 = (min(var_22, var_12));

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_23 += (max(((((((arr_7 [i_3] [i_2]) ? 1 : var_9))) ? 18446744073709551615 : 4294967293)), 0));
            var_24 = (min((((1 >= ((((arr_11 [i_2]) ? var_15 : var_16)))))), ((var_3 ? 23658 : var_12))));
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            arr_16 [i_2] [i_4 - 2] = (arr_7 [9] [i_4]);
            arr_17 [i_2 - 1] [i_4 - 2] [i_4 - 2] = (var_17 / var_13);
            var_25 = (max(var_25, (((((7 | (arr_7 [i_2 - 1] [i_4 - 1])))) ? (arr_8 [i_4] [i_4]) : (max(1720936882, -19393830))))));

            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                arr_22 [i_2] = 1;
                var_26 = (max(var_26, ((((((arr_18 [i_5 - 3] [i_5 - 2] [i_5 - 2] [i_4 - 2]) ? (arr_12 [i_5 - 3] [i_5 - 1]) : 5687089451319691923))) ? (((arr_19 [i_2] [i_2] [i_5]) / var_3)) : var_16))));
                var_27 &= 255;
            }
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                arr_25 [i_2] [i_4 + 1] [i_6] = (((-(arr_23 [2] [i_6] [i_6] [i_2 - 1]))));
                arr_26 [i_6] [i_6] [i_2] = ((~((-5747 ? 0 : 45103475))));
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_28 = ((var_7 ? ((8 ? var_2 : ((17147290918067362698 ? -533632172 : 29952)))) : var_5));
                var_29 *= (var_11 != -var_12);
            }
        }
    }
    #pragma endscop
}
