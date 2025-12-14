/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~(var_4 && 1)))) & ((((192 ? 1 : 0)) - (~63)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = 0;
                        arr_14 [i_0] [i_1] [i_0] [i_0] = var_2;
                        var_11 = (5485744587303939427 && (!var_4));
                    }
                }
            }
        }
        var_12 *= (((((((0 ? var_7 : -8626884938852953130))) || var_5)) || var_2));
    }
    #pragma endscop
}
