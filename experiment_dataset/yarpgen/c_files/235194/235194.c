/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_20 += (!var_13);

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_21 = (max(var_21, (((((max(43, (arr_4 [i_0] [i_1 - 4] [0])))) ? (((min(32758, 2147483648)))) : -16384)))));
                    var_22 = var_2;
                    arr_7 [i_2] [i_2] = (((((var_6 * (arr_4 [i_2 + 1] [5] [i_2 + 1])))) ? ((min((arr_4 [i_2 - 1] [i_1 - 1] [i_1 - 1]), (arr_4 [i_2 + 1] [i_1 + 2] [i_2 + 1])))) : (min(((min(var_7, (arr_1 [i_0] [i_0])))), (((arr_5 [i_0] [i_2] [i_2]) ? -16364 : (arr_5 [i_0] [i_2] [i_2])))))));
                    var_23 = (-(min(((min((arr_1 [14] [i_0]), 135))), 0)));
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    arr_10 [i_0] [i_0] = 85;
                    var_24 += (max(((2141575161 ? var_12 : (arr_2 [i_3 - 1]))), var_10));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_25 = (max(var_25, (((((arr_6 [i_1 - 4] [i_1 - 2] [i_1]) ? (arr_6 [i_1 - 3] [6] [i_1]) : -16365))))));
                    var_26 = var_6;
                }
            }
        }
    }
    var_27 = var_12;
    #pragma endscop
}
