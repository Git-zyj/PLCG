/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = -4607182418800017408;
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);

        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            arr_5 [i_1] = var_10;
            var_13 = (max(var_13, ((((-4607182418800017397 != 253) ? (((var_6 ? (arr_4 [i_1 + 2] [i_1] [i_1]) : (arr_3 [4] [i_1 - 1])))) : (arr_0 [i_0]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [6] |= ((((((4607182418800017393 != (arr_8 [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 2]))))) <= (arr_0 [i_1 - 3])));
                        var_14 = var_11;
                        var_15 = (min(((((max((arr_10 [i_0] [1] [i_2] [i_2] [i_2] [i_2]), 1))) % (arr_10 [i_0] [i_1] [i_2] [2] [i_1] [i_3]))), (arr_3 [i_2] [i_0])));
                    }
                }
            }
            arr_12 [i_0] [6] = (max((((arr_6 [i_0] [i_0] [i_1 - 2]) ? ((9096209828970703088 ? 65533 : -21182)) : (((!(arr_1 [i_0] [i_1])))))), (-113 < 63164)));
            arr_13 [i_1] [i_1] [i_0] = (arr_9 [i_1]);
        }
    }
    var_16 = (((((var_1 * var_3) && var_8)) ? (max(var_11, var_4)) : (((min(var_11, (!8710314754006867807)))))));
    #pragma endscop
}
