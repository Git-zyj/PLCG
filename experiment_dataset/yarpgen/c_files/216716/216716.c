/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((var_5 ? var_0 : var_9)) << (var_7 - 458385795))))));
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (((~var_6) ? var_2 : var_2));
                    var_13 ^= ((~((var_5 * (var_7 <= var_4)))));
                    var_14 ^= max((((max(var_2, (arr_0 [i_2 - 1]))) / (max((arr_5 [17] [i_1 + 1] [i_2 - 1] [i_2 - 1]), var_4)))), (arr_2 [i_0]));
                    var_15 ^= (((((+(max((arr_2 [i_0]), 1645675849))))) % (max(((var_3 ? var_8 : var_6)), ((24883 ? (arr_3 [i_2 - 1]) : var_3))))));
                }
            }
        }
        var_16 = var_6;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_9 [i_3] = ((((((max(var_7, var_5))) ? ((((arr_6 [1]) ? (arr_0 [i_3]) : 69))) : (~5)))) ? (((-var_5 ? 1 : (arr_0 [i_3])))) : var_3);
        var_17 = (((arr_4 [i_3] [i_3] [i_3]) * var_8));
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        var_18 = ((((17179607040 ? 32 : 65535)) <= (arr_11 [i_4 - 2])));
        var_19 = (max(var_19, (((((max(1, 1))) <= var_8)))));
        arr_12 [i_4] = (((var_3 ? ((var_8 ? (arr_10 [i_4]) : var_1)) : (~var_3))));
        var_20 = ((var_8 ? ((max((max(-1645675837, (arr_11 [i_4]))), (~1)))) : (((min(16892135692360456376, 44984)) | 890855405))));
        var_21 = (!((var_6 && (arr_10 [i_4 + 2]))));
    }
    #pragma endscop
}
