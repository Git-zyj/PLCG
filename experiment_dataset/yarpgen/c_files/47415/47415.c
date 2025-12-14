/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_11 >> ((min(var_18, (var_14 >= var_14))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_20 = (max(var_20, (((((min((arr_3 [i_1] [i_1 + 1]), (arr_3 [i_1 + 1] [i_1 + 1])))) ? ((min((max((arr_1 [i_0] [8]), (arr_1 [i_0] [10]))), ((((arr_2 [0]) == (arr_4 [i_0]))))))) : ((min((arr_3 [i_0] [i_1]), (max(var_8, 40650))))))))));
            var_21 = (max(var_21, (~var_18)));
        }
        arr_5 [i_0] [i_0] = (((((min((arr_1 [i_0] [i_0]), 174))) && ((((arr_4 [i_0]) ? var_8 : 200))))));
    }
    var_22 = ((var_9 ? 60310 : var_9));
    #pragma endscop
}
