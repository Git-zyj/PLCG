/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 = (min(var_19, -var_8));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((~(~var_9))))));
                    arr_6 [i_1] [i_1] = ((-(((18446744073709551588 || (var_10 || -1038))))));
                    arr_7 [i_1] [i_1] = 1319614594;
                }
            }
        }
    }
    var_21 = ((-(!var_16)));
    var_22 = (max(var_22, (((var_7 ^ (((~var_11) & (~var_11))))))));
    #pragma endscop
}
