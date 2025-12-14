/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (((~(max(((max(var_6, var_4))), (arr_5 [i_0 - 2] [i_0 - 2]))))))));

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_1] = (max((arr_5 [i_0] [i_2 - 1]), (min((arr_5 [i_0 - 1] [i_0 + 2]), (arr_5 [i_0] [i_0 - 2])))));
                    var_11 = var_5;
                }
                var_12 = ((((((arr_3 [i_0]) ? (arr_3 [i_1]) : (arr_3 [i_0])))) ? (min(var_8, (arr_5 [i_1] [i_0 + 1]))) : (arr_3 [i_0])));
                var_13 = (arr_5 [i_0 - 2] [i_1]);
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_3] [i_3] [i_3] = ((max((arr_16 [i_0 + 1] [i_3] [i_0 + 2] [i_3] [i_5]), (arr_16 [i_0] [i_3] [i_4] [i_3] [i_0]))));
                                var_14 += (max(26406, -39));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = -75;
    var_16 = ((((max(var_1, (!var_0)))) ? var_3 : var_9));
    var_17 = var_4;
    #pragma endscop
}
