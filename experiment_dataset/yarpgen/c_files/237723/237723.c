/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!240);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((max(7844900738504830316, 10601843335204721319)))));

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    var_21 = arr_3 [i_0] [i_0];
                    var_22 = (min(var_22, ((((~var_15) + var_0)))));
                    var_23 = ((((var_2 | var_0) ^ (~10601843335204721309))));
                }
                arr_6 [i_1] = (((var_15 << (var_5 - 1841314784))) / (((arr_1 [i_0]) / (arr_1 [i_0]))));
                var_24 = ((arr_0 [i_0] [i_1]) | var_7);
            }
        }
    }
    var_25 = (min(var_25, (var_14 ^ var_13)));
    var_26 = (min(((((max(var_2, var_17))) % ((max(var_0, var_4))))), ((var_10 / ((7743110144335973456 ? 223 : var_5))))));
    var_27 = ((((var_2 ? 226 : ((var_9 ? var_11 : var_5)))) <= (var_16 ^ var_6)));
    #pragma endscop
}
