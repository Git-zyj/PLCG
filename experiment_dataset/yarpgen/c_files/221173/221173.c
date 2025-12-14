/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_3;
    var_15 = var_4;
    var_16 = -486697794160638315;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_17 = max(((((arr_1 [i_0 + 2] [8]) != (arr_1 [i_0 - 1] [i_0 + 2])))), (arr_1 [i_0 + 3] [i_0]));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_18 = (arr_2 [i_0] [i_1]);
            var_19 ^= (((var_0 ? var_8 : -38564476)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_10 [i_3 + 2] [i_1] [i_3 + 2] [i_3] = ((((max((arr_6 [i_3] [i_3] [i_3 - 2] [11]), (arr_6 [i_3] [i_3] [i_3 + 3] [i_3 + 3])))) ? (max((arr_3 [i_0 - 3] [i_0] [i_0]), (((arr_7 [i_1] [i_3 + 3]) ^ 13471010394812928360)))) : var_12));
                        var_20 = (arr_4 [i_0] [i_0]);
                    }
                }
            }
            arr_11 [i_0 + 3] [i_0] = var_5;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_14 [i_0] [i_0 - 3] [i_0 - 3] = (-(!var_12));
            var_21 += (((((arr_1 [i_0 + 2] [i_4]) + (arr_13 [i_0 - 1] [i_4] [i_4]))) ^ ((((!(arr_13 [i_0 - 3] [i_0 - 3] [1])))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        {
                            var_22 = (arr_1 [i_0] [i_4]);
                            var_23 = (min(var_23, ((max((max((arr_9 [i_0 + 2]), (arr_9 [i_6]))), (max((arr_9 [i_6]), var_8)))))));
                        }
                    }
                }
            }
            var_24 &= (((((0 ? (arr_0 [i_4]) : var_2))) || var_2));
        }
        arr_24 [4] = (max((~var_5), (arr_15 [i_0] [i_0 + 2])));
        var_25 += (!1);
    }
    #pragma endscop
}
