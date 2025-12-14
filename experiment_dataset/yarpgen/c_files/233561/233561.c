/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((((var_6 ? 153 : 2651)) != var_1)))) != ((var_11 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 2])))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_12 = ((arr_3 [i_0 + 3] [i_0 - 1]) != (arr_3 [i_0 - 1] [i_0 + 1]));
            var_13 = (arr_4 [i_0 + 2] [i_1] [i_1 - 2]);
            var_14 = (((var_3 != (var_6 != 1))));
        }

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_15 = (min(-61, 60));
                var_16 = ((var_4 ? 12590552123176971316 : (arr_6 [i_2])));
            }

            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                arr_15 [i_4] [i_4 + 1] [i_2] = (((var_6 >= (!var_8))));
                var_17 = 17091241046224695686;
                var_18 = ((!(arr_7 [i_4 + 2])));
                var_19 = (max(var_19, ((var_7 ? (((arr_4 [i_0 - 2] [16] [i_2 - 1]) - (arr_4 [i_0 + 1] [18] [i_2 + 2]))) : (arr_4 [i_0 + 2] [16] [i_2 - 1])))));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                var_20 -= (((((142 ? 1 : var_9))) >= ((0 ? 60 : 3411185598733836727))));
                var_21 = arr_0 [0];
            }
        }
    }
    for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = (((((arr_16 [i_6] [i_6 - 2] [i_6 - 2]) ? 5856191950532580299 : 1)) ^ ((min(1, var_4)))));

        /* vectorizable */
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            arr_27 [i_7] = 1;
            var_22 = (arr_13 [i_6 - 1] [i_6] [i_6 - 2]);
            var_23 = var_6;
            arr_28 [i_6] = 12590552123176971316;
            var_24 -= (((arr_9 [i_6 + 3] [i_7] [i_7 - 2] [i_7]) ? ((var_9 ? 1073733632 : (arr_20 [i_6 + 2] [i_6 + 2]))) : ((1 ? var_0 : 60))));
        }
        var_25 = (min(5399341895144698192, -19899));
    }
    var_26 = var_5;
    #pragma endscop
}
