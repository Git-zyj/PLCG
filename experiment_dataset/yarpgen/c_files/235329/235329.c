/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = ((((((min(var_2, var_3))) ? (6479173334276327552 <= 32767) : (var_2 && var_2))) ^ (((((var_1 ? var_0 : (-32767 - 1)))) ? var_8 : (var_10 && -4719935261643151883)))));
    var_14 = var_2;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (max((arr_1 [i_0] [i_0]), (-1817849803 ^ 633924626)));
        arr_2 [i_0] = ((((((arr_1 [i_0] [i_0]) > (arr_0 [i_0])))) >= ((max((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_16 = (((arr_3 [i_1 + 2]) > (arr_1 [i_1 + 3] [i_1 + 2])));
        arr_7 [i_1] [i_1] = (((arr_1 [14] [0]) < (arr_1 [i_1 - 1] [2])));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_17 = (((((arr_0 [i_2]) ? (arr_0 [i_2]) : 32754))) ^ (-9223372036854775807 - 1));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    {
                        var_18 = (((((-1817849803 ? -1817849809 : -3116705968232778711))) ? (min((arr_0 [i_2]), (arr_3 [i_2 + 4]))) : (arr_0 [i_2])));
                        arr_18 [i_2] [i_2] [1] = (arr_5 [i_2] [i_3 + 1]);
                    }
                }
            }
        }
        arr_19 [i_2] = ((((1817849803 % (arr_0 [i_2]))) * ((32767 / (arr_15 [i_2])))));
        var_19 = (min(var_19, ((((arr_6 [i_2 - 1]) % ((16197 ? 25 : 35420)))))));
        var_20 = (i_2 % 2 == 0) ? (((((max((arr_6 [i_2 + 4]), 9306))) ? (((arr_5 [i_2 + 3] [i_2 + 4]) >> (((arr_10 [i_2] [i_2]) - 358308783)))) : (arr_5 [i_2 + 2] [i_2 + 4])))) : (((((max((arr_6 [i_2 + 4]), 9306))) ? (((arr_5 [i_2 + 3] [i_2 + 4]) >> (((((arr_10 [i_2] [i_2]) - 358308783)) + 767487333)))) : (arr_5 [i_2 + 2] [i_2 + 4]))));
    }
    var_21 = var_3;
    #pragma endscop
}
