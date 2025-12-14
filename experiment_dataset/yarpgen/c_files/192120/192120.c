/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1 + var_5);
    var_12 = ((var_1 ? (var_5 % 127) : (~var_8)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = (143 != (arr_1 [i_0 - 2] [i_0 - 1]));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_1 + 2] [i_1 - 3] [3] = (33872 ? (arr_6 [12] [i_0 - 1] [i_0 - 2]) : (~131));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [11] [i_1 + 1] [0] [11] [1] [i_1 + 3] = ((var_2 > (((arr_9 [i_4 - 2] [i_3 - 2] [i_2] [i_0]) ? 18446744073709551615 : 4340982854428877817))));
                                var_14 *= arr_2 [i_0 - 1];
                            }
                        }
                    }
                    var_15 = 1;
                    var_16 = (var_5 ? (arr_7 [i_2] [i_1 + 4] [i_1] [i_0]) : (arr_7 [i_0] [i_1] [i_2 + 2] [i_2 + 2]));
                }
            }
        }
        var_17 = (-(arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 2]));
        arr_17 [i_0] = ((var_0 ? (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [0]) : 64));
    }
    var_18 = ((((max(var_3, var_3))) ? var_8 : var_1));
    #pragma endscop
}
