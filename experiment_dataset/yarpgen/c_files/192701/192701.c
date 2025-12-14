/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max(var_6, var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(var_3, 255));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] = (((min(var_7, ((var_12 ? var_3 : (arr_2 [i_1 + 1])))))) > ((5062739323822468439 << (((arr_1 [i_1 + 1]) - 12968162139791305886)))));
                            arr_12 [i_2] [i_2] [i_2] [i_2] = ((4294967295 ? (min((arr_5 [i_3 + 2]), (((arr_3 [i_3] [i_2 - 3] [i_1]) ? (arr_3 [i_0] [i_1] [i_2]) : var_5)))) : ((((min(var_0, var_6)))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_17 = ((((((arr_2 [i_4]) ? 0 : (arr_1 [i_4])))) ? (arr_2 [i_4]) : ((((!(arr_2 [i_4])))))));
        var_18 = (min((arr_3 [i_4] [i_4] [i_4]), (((arr_0 [i_4]) ? var_13 : (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))));
        var_19 = var_1;
    }
    var_20 = ((-var_2 ? ((max(var_8, (min(-1, var_0))))) : ((min(1, (!1))))));
    var_21 ^= (((((1 ? (min(var_1, 4169669300)) : 125298013))) ? var_11 : (~var_2)));
    #pragma endscop
}
