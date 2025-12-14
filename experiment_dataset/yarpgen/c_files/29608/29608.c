/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_14 ^= ((-var_7 ? (arr_0 [i_1 + 3]) : ((((arr_1 [i_1 + 2]) | (arr_3 [i_0] [i_1 + 1]))))));
                var_15 -= var_4;
                var_16 = (max((~var_5), (~var_4)));
                arr_6 [i_0] [i_1] = var_7;

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_10 [i_0] [2] [2] = (((var_10 ? 24864 : var_5)));
                    var_17 = -24855;
                    arr_11 [i_0] [11] [i_2] = var_0;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_18 = (max(var_18, var_2));
                    arr_16 [9] [0] [i_0] = (~-674597122);
                }
            }
        }
    }
    var_19 = var_8;
    #pragma endscop
}
