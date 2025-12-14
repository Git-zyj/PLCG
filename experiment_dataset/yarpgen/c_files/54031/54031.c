/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = (((arr_3 [i_0 - 1] [i_0 - 1]) ? (((arr_3 [i_0 - 1] [i_0 + 1]) ? (arr_3 [i_0 + 1] [i_0 - 1]) : var_6)) : (arr_3 [i_0 - 1] [i_0 + 1])));
        var_14 = (min(var_14, ((((((-(arr_0 [4])))) ? (((arr_0 [2]) ? 127 : (arr_0 [4]))) : (arr_0 [2]))))));
        var_15 = (min(var_15, (((-(min(var_2, (((arr_1 [10]) ^ var_12)))))))));
        var_16 -= (((arr_2 [i_0]) ? 1 : (arr_2 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_17 = 113;
                        arr_11 [i_0] = (max(((max(48165, (arr_10 [i_0] [i_0])))), ((var_8 ? var_2 : 48190))));
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, var_10));
    var_19 = var_7;
    var_20 = (max(var_20, var_12));
    var_21 += var_11;
    #pragma endscop
}
