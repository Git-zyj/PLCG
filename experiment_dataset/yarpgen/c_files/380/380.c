/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((2691344221 ? 27375 : -22436));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_5;
        arr_5 [i_0] [i_0] = -var_6;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_19 = (((((((arr_14 [i_1] [4] [i_1]) | var_11)))) ? (arr_12 [i_1]) : ((22422 ? (arr_11 [i_1] [i_3]) : (arr_6 [i_3])))));
                    arr_15 [7] [i_2] [i_1] = ((((((~8337570605018334043) ? 18446744073709551615 : (arr_8 [i_1] [i_1])))) ? (((((min(var_8, var_3))) && var_15))) : var_5));
                    arr_16 [i_1] [i_3] [i_3] [18] |= (max((arr_14 [12] [2] [i_2]), (((~(arr_7 [i_3]))))));
                    var_20 = (((arr_8 [i_1] [i_1]) % (var_17 && var_2)));
                }
            }
        }
        arr_17 [i_1] = ((~(~var_14)));
    }
    #pragma endscop
}
