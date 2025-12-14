/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_10));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (min(((max(((min(var_12, 87))), 13204))), (min(((((arr_0 [i_0]) ? 226 : 1794682595))), (-121 | var_8)))));
        var_16 = (max(var_16, (54112 / var_2)));
        arr_2 [i_0] [i_0] &= (min((((6144918781529260926 <= (arr_1 [i_0])))), (min(var_4, (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (min((max(var_3, (arr_3 [i_0] [i_1] [i_0]))), (((((max(27937, var_4))) & var_6)))));
                    arr_10 [i_0] [i_1] [i_1] = ((~(-var_6 <= 14723)));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_14 [i_0] = var_7;
                        arr_15 [i_3] [i_2] [i_1] [i_0] = 5;
                        var_18 = -var_9;
                    }
                }
            }
        }
    }
    #pragma endscop
}
