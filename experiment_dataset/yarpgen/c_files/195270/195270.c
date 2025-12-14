/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_7;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_13 = (arr_5 [i_0] [i_1] [i_2]);
                        var_14 = arr_1 [i_0];
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_14 [14] = ((((((arr_13 [i_4]) ? (arr_13 [i_4]) : (arr_13 [i_4])))) ? ((((48565 ? (arr_12 [11] [7]) : (arr_12 [i_4] [3]))) * (((arr_12 [i_4] [i_4]) / 1874155736)))) : (min((arr_13 [i_4]), (arr_13 [i_4])))));
        var_15 *= (arr_12 [i_4] [i_4]);
    }
    var_16 = (max(var_16, (((~((((!var_6) > (max(var_4, var_10))))))))));
    #pragma endscop
}
