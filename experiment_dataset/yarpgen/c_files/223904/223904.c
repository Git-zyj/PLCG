/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= 1064441637;
    var_21 = (min((((((-63 ? var_17 : 1))) - ((2147483647 ? var_2 : var_12)))), var_10));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((min((arr_2 [i_0 + 1]), (arr_1 [i_0 - 1] [i_0]))));
        arr_4 [i_0 + 1] [i_0 - 3] = ((var_8 >> (((((var_13 ? 1 : 2147483647))) ? (((128 == (arr_1 [4] [i_0 - 3])))) : (min(var_3, -2147483632))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (~var_19);
        var_22 = ((((max(18446744073709551615, var_18))) ? 132 : (((1125891316908032 | 0) ^ (arr_5 [i_1])))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (!var_18);
        var_23 = (min(var_23, var_12));
        var_24 = ((max(-1945459858, 18446744073709551615)));
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_19 [i_3 + 1] [i_3 + 1] [i_5] = var_8;
                        var_25 = (~((~(arr_1 [i_2] [i_3]))));
                    }
                }
            }
        }
    }
    var_26 = ((var_0 ? var_0 : (~var_10)));
    #pragma endscop
}
