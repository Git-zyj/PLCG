/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = (min(var_17, var_0));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_18 = 86;
        var_19 *= 1701838665185279298;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = ((~(((-1701838665185279272 >= (((max(0, -86)))))))));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_17 [i_0] = 2096128;
                            var_20 = 70;
                            arr_18 [i_1] [i_1] [i_0] [i_1] [i_1] = ((-(min((arr_15 [i_2 - 3] [i_2 + 4] [i_2 + 2] [i_3 - 1] [17]), (arr_8 [i_3 - 2] [i_3 - 2] [i_0] [i_3 + 1])))));
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_21 [i_0] [i_5] = ((((arr_14 [i_0 - 3] [i_0 + 4] [i_0 + 2] [i_5] [i_5]) ? (arr_3 [i_0] [i_0] [i_0 - 2]) : (arr_3 [i_0 + 1] [i_5] [i_0]))));
            arr_22 [i_0 - 2] [i_0] [10] = (max(-1112334738, ((37405 >= (arr_5 [i_0 + 4])))));
        }
    }
    var_21 = (2147483647 && 1654047335);
    var_22 = var_5;
    #pragma endscop
}
