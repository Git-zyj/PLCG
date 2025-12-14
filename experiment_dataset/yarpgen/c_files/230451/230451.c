/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((min(var_15, (var_11 + -3))) <= var_6))));
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (arr_0 [i_0] [i_0])));

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_20 = var_12;
                    var_21 = ((((-((min(0, 0))))) <= 35));
                    arr_6 [i_0] [i_0] [20] = ((((195 >> 11) / var_3)));
                }
            }
        }
    }
    #pragma endscop
}
