/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~1767575041260654668);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 += ((max(var_12, 65528)) / ((max(99, 2096234197))));
        arr_2 [i_0] [i_0] = ((29867 * (max(0, var_14))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_18 = ((9146257996358934786 ? (min(var_1, 1279263065466482836)) : ((max(127, 2096234197)))));
                        var_19 = (max(var_19, -2096234197));
                    }
                }
            }
        }
    }
    var_20 *= (max((~35660), var_7));
    #pragma endscop
}
