/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = ((!(((((((6 ? -105 : 21)) + 2147483647)) >> ((((9686 ? 65511 : 5415)) - 65503)))))));
        var_18 += ((var_10 ? (((var_15 ? -402565168 : (((arr_1 [i_0 - 1]) * var_12))))) : ((+(((arr_0 [i_0 + 4]) / var_10))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_19 ^= (((((6 ? 43211 : (arr_11 [i_0] [i_0] [i_3]))) != ((65530 ? var_13 : 19071)))));
                        var_20 = ((~((((-12 || -17116) && var_2)))));
                    }
                }
            }
        }
    }
    var_21 = (!var_15);
    #pragma endscop
}
