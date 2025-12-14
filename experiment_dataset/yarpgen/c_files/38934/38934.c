/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 = (arr_6 [i_0] [i_0] [i_1] [1] [i_2] [i_0]);
                        arr_8 [i_0] [i_0 - 2] [i_3] = ((-(arr_2 [i_0 - 1] [i_2 - 1])));
                        var_15 = (((((-var_5 ? (arr_0 [i_0 + 1] [i_1]) : (arr_6 [16] [i_1] [16] [i_3] [i_3] [i_0])))) ? (max(-15779, (max(111202911, (arr_5 [i_0] [i_0] [i_2]))))) : (65535 >= 1)));
                        var_16 = (max(((~(~0))), ((~(~var_0)))));
                    }
                }
            }
        }
        arr_9 [i_0 - 2] = (((arr_7 [18] [i_0] [i_0] [18] [2] [i_0]) == (max((-1531269939 ^ 101), 1))));
        var_17 |= (max(-20, (min((arr_7 [6] [18] [i_0 - 2] [i_0] [6] [i_0 - 1]), var_10))));
    }
    var_18 += (var_8 ? var_3 : var_3);
    var_19 = ((!((max((max(10390, 2113728666)), ((65526 >> (880610480 - 880610460))))))));
    #pragma endscop
}
