/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 = ((-1991814128 == (!var_9)));
                        var_14 += (arr_12 [i_0] [i_1] [i_2] [i_1]);
                        arr_13 [i_0] [i_1] = (((~var_4) < ((((arr_2 [3]) == var_2)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                {
                    var_15 = ((((((!(arr_0 [i_0]))))) ^ -var_0));
                    var_16 = (min(var_16, var_3));
                }
            }
        }
    }
    var_17 = ((((var_11 ? var_7 : ((-1991814128 ? 102 : -1991814128)))) >> ((((var_9 >> (var_8 - 1430070509))) << (((min(var_11, 1991814128)) - 1991814098))))));
    #pragma endscop
}
