/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min((min((var_15 / var_0), (var_2 / var_13))), var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_7;
                var_18 = (((arr_4 [i_0] [i_1]) ? (arr_3 [i_1] [i_0]) : (((var_10 || 75064959106133752) ? 5827416579765059749 : (arr_0 [i_0])))));
                arr_6 [i_0] = (arr_2 [i_0]);
                var_19 = (min(var_19, 151122302742081343));
                arr_7 [i_0] [i_0] [i_1] = var_4;
            }
        }
    }
    #pragma endscop
}
