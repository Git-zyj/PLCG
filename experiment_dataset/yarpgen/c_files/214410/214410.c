/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_5));
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((((max((max((arr_4 [i_1] [i_0]), (arr_4 [9] [7]))), var_13))) < -57));
                arr_5 [i_0] [i_0] = ((!((max((!0), var_11)))));
                var_20 = 10507548192555978121;
                arr_6 [i_0] [i_1] = var_9;
            }
        }
    }
    var_21 = var_13;
    var_22 = var_15;
    #pragma endscop
}
