/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_12));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_16 = (((!(!0))));
        var_17 -= min(((((arr_0 [i_0] [2]) && 6596898467790603264))), ((((((!(arr_1 [i_0 - 1] [2]))))) / (arr_1 [i_0 + 1] [0]))));
        arr_2 [i_0] = ((!((min((min(2131185203, (arr_0 [i_0] [i_0]))), (arr_0 [3] [i_0]))))));
        var_18 = (!2130706432);
        var_19 *= -15;
    }
    var_20 = var_9;
    #pragma endscop
}
