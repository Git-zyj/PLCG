/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 = arr_4 [i_0];
                        var_18 = arr_5 [1];
                    }
                }
            }
        }
        var_19 = (arr_2 [i_0]);
    }
    var_20 = (123 >= 10532);
    #pragma endscop
}
