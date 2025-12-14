/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_9));
    var_13 = ((28310 ? var_10 : (((!((min(var_4, var_4))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = (max((min((max(var_4, var_3)), ((min(var_10, 8256))))), (~57279)));
                    var_14 = ((((min(-88, var_11))) ? (max((arr_3 [i_2] [i_1]), -1358770006)) : (~var_3)));
                }
            }
        }
    }
    var_15 = (((((var_1 ? -var_1 : ((min(var_1, 122)))))) ? (((((var_7 ? var_7 : var_2))) ? 412477728 : var_6)) : var_7));
    var_16 = ((((1335951034 ? var_2 : var_10))));
    #pragma endscop
}
