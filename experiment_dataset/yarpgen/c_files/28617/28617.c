/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (max((-2162847185 % 1), (((354375395180979663 == (arr_1 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] = 354375395180979663;
            var_12 = (arr_0 [i_0]);
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_8 [i_0] = (max(((max((arr_4 [i_0] [i_0]), ((max((arr_6 [i_0] [i_0]), 60403)))))), ((~(((arr_7 [i_2]) ? -57 : (arr_0 [i_0])))))));

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                arr_12 [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_2]);
                var_13 = (-1 ? (var_0 && -var_1) : ((((((arr_6 [i_0] [i_0]) != var_8))) % 408)));
                arr_13 [i_0] [i_2] [i_3] [i_0] = var_1;
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_14 -= var_11;
                var_15 = (arr_7 [i_2]);
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_19 [4] |= ((!(0 | 7176666903067864939)));
                arr_20 [i_0] [i_0] = ((((arr_17 [i_0] [i_0] [i_5]) ? (arr_17 [i_0] [i_0] [i_5]) : var_2)));
                var_16 = 22;
            }
            arr_21 [i_0] [i_2] [i_2] = (-95 != ((2705653889930935773 ? 38632 : 215)));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_17 = (max(var_17, (((((arr_1 [10] [10]) > var_11))))));
            var_18 += (12324609453592355497 - (arr_22 [i_0]));
        }
    }
    var_19 = var_2;
    var_20 = (max((((var_9 <= var_6) & (max(19, 15574698821222478296)))), var_4));
    #pragma endscop
}
