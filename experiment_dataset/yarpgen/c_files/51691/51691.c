/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_10 || var_3) * ((max(var_1, var_2)))))) ? var_2 : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = var_10;
                    arr_9 [i_1] [i_1] = ((((((-1033392629 ? -1033392618 : (arr_3 [i_0])))) ? (var_9 - 1033392629) : (arr_6 [i_2 + 2] [i_2 + 2] [i_2]))) < (((arr_2 [i_1] [i_0]) / (arr_2 [i_1] [i_0]))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_2] [i_3] [i_0] [i_2] = ((37 ? (arr_11 [i_2 + 2] [10] [i_2 + 3] [i_2 - 1] [i_2] [i_2 + 3]) : 37));
                        var_13 -= (219 < 10244069835973813896);
                        var_14 = ((+((11984890417240253005 ? (arr_6 [i_2] [i_1] [i_0]) : (arr_12 [i_1] [i_1] [i_2] [i_2] [i_3] [5])))));
                    }
                }
            }
        }
    }
    var_15 += ((!((max(((6 ? 6 : var_5)), (((199 >> (var_3 - 18264)))))))));
    #pragma endscop
}
