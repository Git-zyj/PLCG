/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-10965 >= 199);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = 0;
                var_19 = (max(var_19, (arr_0 [14] [14])));
                arr_7 [i_0] = ((((arr_3 [i_0 + 1] [i_0 - 3]) - (((arr_1 [i_0]) & (arr_6 [i_1] [i_1 + 2]))))));
                var_20 = max(16777215, 7162451017598531974);
                arr_8 [i_0] = ((1 / (arr_1 [i_0 + 3])));
            }
        }
    }
    var_21 = (var_1 - var_14);
    var_22 = -var_14;
    #pragma endscop
}
