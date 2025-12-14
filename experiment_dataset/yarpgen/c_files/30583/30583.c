/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(((var_1 ? 258048 : var_7)), var_13)));
    var_15 -= var_12;
    var_16 = -var_4;
    var_17 ^= 229;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_18 = ((-(((!var_4) ? 15130211337562102969 : (~-32763)))));
                        var_19 = (min(var_19, 35898));
                    }
                }
            }
        }
        arr_11 [i_0] = (min((arr_0 [i_0]), ((var_4 << (((arr_5 [i_0] [i_0] [i_0]) - 1747354388))))));
    }
    #pragma endscop
}
