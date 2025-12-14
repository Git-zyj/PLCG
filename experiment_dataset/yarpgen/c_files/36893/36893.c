/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_3 || (((max(16887102746981544289, 0)) != (arr_0 [i_0] [i_0])))));
        var_20 = (max(var_2, (min((arr_1 [i_0]), (arr_0 [i_0] [8])))));
        var_21 = var_16;
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_7 [i_1 + 3] = ((~(max(var_0, (arr_4 [i_1 - 1])))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_22 = (((((min(251658240, (arr_0 [i_2] [i_3]))) >> var_13)) != (min((arr_4 [i_1]), (min(251658226, 18446744073457893375))))));
                            var_23 = var_6;
                            arr_14 [i_1] [i_4 - 1] [i_3] [i_4] [i_4 - 1] = (min((arr_4 [i_1 - 2]), (arr_13 [i_1] [14] [i_1] [i_1] [8])));
                            var_24 = (arr_8 [i_1] [i_2] [i_3] [i_2]);
                            var_25 = (max(251658209, 251658249));
                        }
                    }
                }
            }
        }
        arr_15 [15] [i_1] = var_15;
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_26 = (251658221 != var_5);
        var_27 = var_7;
    }
    var_28 = ((var_5 ? var_11 : (var_2 > var_3)));
    var_29 = 18446744073457893375;
    #pragma endscop
}
