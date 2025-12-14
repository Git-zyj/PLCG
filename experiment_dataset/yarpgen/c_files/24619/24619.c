/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_11, -5622970343742887963));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((max((max((arr_0 [i_1]), (max((arr_4 [i_1] [4]), 19654)))), (arr_3 [i_1] [i_1] [i_0]))))));
                arr_5 [i_0] = max(27, (arr_1 [i_0]));
                var_19 = (min(18209345155386467840, ((max(1104948337677017933, ((min((arr_0 [i_0]), (arr_3 [i_0] [6] [3])))))))));
                arr_6 [i_0] = (arr_0 [i_0]);

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_20 += (max((arr_2 [i_0] [i_2]), (arr_2 [i_0] [i_1])));
                    arr_9 [i_0] [i_0] [i_1] = (max((max(1, (max(1104948337677017933, 6307901604911116240)))), ((max(((max(-17409, 1))), 55414)))));
                }
            }
        }
    }
    var_21 = min((max((max(1104948337677017935, var_15)), (min(var_0, 1104948337677017927)))), var_9);
    var_22 = (max(var_12, (min((min(596643581, var_12)), (max(var_8, -121))))));
    #pragma endscop
}
