/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = ((((((((arr_9 [i_2] [i_0] [i_0]) ? var_10 : var_0))))) & ((var_7 & (525881812 & 5257851135614364718)))));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_13 = (-10 & 1);
                        var_14 = (arr_11 [i_3] [i_3 + 2] [i_0 - 2] [i_0]);
                        var_15 = ((-121 ? 0 : 20));
                        var_16 = var_7;
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_17 = (((-(-9223372036854775807 - 1))));
                        arr_15 [i_4] [i_2] [i_0 - 2] = (((((var_11 & (arr_6 [i_0]))) & (arr_2 [i_0 - 1] [i_1 + 4]))) & (arr_1 [i_4]));
                        var_18 = (((((11286 ? 16 : 112))) ? (arr_10 [i_0] [i_1] [i_2] [4]) : (((arr_8 [i_1] [i_1 + 2] [i_1 + 4]) ? (arr_4 [i_0 - 2]) : 34359738367))));
                        arr_16 [i_4] [i_2] [i_1] [i_0] = (arr_6 [i_4]);
                    }
                }
            }
        }
    }
    var_19 &= var_6;
    var_20 = (max(var_20, 1));
    var_21 = var_3;
    #pragma endscop
}
