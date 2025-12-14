/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_4 | (!var_1))))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_11 = var_5;
            arr_6 [i_0] [i_0] [i_1] = (arr_1 [i_0]);
            var_12 = (min(var_12, 1151182005));
        }
        var_13 = (min(var_13, (17106158749060151382 || 1340585324649400229)));
    }
    #pragma endscop
}
