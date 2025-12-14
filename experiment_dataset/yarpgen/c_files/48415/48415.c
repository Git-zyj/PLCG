/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = -7126;
    var_18 = (min(var_18, ((((((-((var_5 ? var_11 : 3090647906))))) ? (~var_7) : var_9)))));

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_19 = (min(3090647906, ((1204319394 ? 9242469461593527344 : 1204319407))));
        arr_3 [i_0] = ((((((((-91 ? (arr_2 [0]) : 9204274612116024271))) ? (arr_2 [i_0 - 1]) : 1204319407))) ? (min(240, 3090647906)) : ((3090647906 ? 3090647883 : var_7))));
        var_20 = ((-(arr_2 [i_0 - 4])));
    }
    #pragma endscop
}
