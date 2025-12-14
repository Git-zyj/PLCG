/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((var_3 ? (max(0, 0)) : ((min(-2, var_4))))) >> (var_6 - 212359645));
    var_13 = (max(var_13, ((max((var_6 & 0), ((min(var_1, var_8))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 -= ((~(84 | 127)));
        var_15 = var_4;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_16 = (((min((arr_0 [i_1 + 1] [i_1 + 1]), (arr_1 [i_1 - 1]))) & (((((arr_0 [i_1 + 1] [i_1 + 1]) + 2147483647)) << (((arr_6 [i_1 + 1]) - 3942565548803962225))))));

                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_2] [i_3] [i_1] [i_4 + 1] = ((~(arr_3 [i_4 + 1])));
                        var_17 = (((-2147483647 - 1) & (var_1 | 611373201568440227)));
                    }
                }
            }
        }
        arr_17 [i_1] = min((min(((3 ? 30 : 3)), 0)), (!120));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] = max((arr_2 [i_5 - 1] [i_5 - 1]), (arr_3 [i_5 - 1]));
        arr_22 [5] [i_5] = (((((arr_19 [i_5 - 1] [i_5 - 1]) + (arr_0 [i_5] [i_5 - 1])))) ? (((((arr_20 [i_5]) ? -1 : (arr_18 [i_5 - 1]))))) : var_1);
        var_18 = (((arr_20 [i_5 - 1]) && ((max((arr_20 [i_5 - 1]), 0)))));
        arr_23 [i_5] [i_5] = ((18446744073709551603 + (((max(122, ((((arr_1 [i_5]) == 549755813887)))))))));
    }
    #pragma endscop
}
