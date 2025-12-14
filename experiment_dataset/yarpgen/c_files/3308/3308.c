/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(14, 171))) ? (min((((var_3 ? 0 : var_2))), (min(var_3, var_1)))) : (((min(1, (max(27, 1))))))));
    var_11 -= var_8;
    var_12 = (((1909499008 ? (4 && 165) : ((0 ? 209 : -22)))) < (min(((var_9 ? 132 : -7381)), var_0)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_13 = var_4;
                        arr_10 [i_0] [i_0] [i_0] = (arr_8 [i_3 - 3] [i_3 + 1] [i_3 - 2] [i_3 - 2]);
                        var_14 = (arr_4 [i_0 + 2] [i_1 + 1]);
                        arr_11 [i_0 + 2] [23] [i_3] = ((255 ? (((-1040446532868480526 + (-127 - 1)))) : 240));
                        var_15 = ((var_9 ? ((7385 ? (arr_1 [3]) : var_4)) : ((113 ? var_9 : (arr_7 [1] [6] [1] [i_3 - 3])))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 -= (max((arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0]), var_6));
                        var_17 = (min(var_17, ((((179 + 4294967290) ? ((min((arr_6 [i_0] [i_1 - 1] [i_2] [i_4]), (arr_6 [i_0] [i_1 - 1] [i_2] [i_2])))) : (((~var_5) ? ((min(40, 121))) : (arr_3 [i_1] [i_1] [i_0 + 1]))))))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_18 = (((max((arr_14 [i_0] [i_1] [i_2] [i_5]), 19458))) || ((min(23, 1))));
                        var_19 = ((!(~var_2)));
                    }
                    arr_17 [i_0] [12] [1] = (max(((max((arr_8 [i_0 + 1] [i_0] [i_1 + 1] [i_2]), 1))), var_6));
                }
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
