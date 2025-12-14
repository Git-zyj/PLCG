/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, var_11));
        var_14 = max((((((var_12 >> (127 - 115)))) ? ((var_3 ? var_4 : var_4)) : ((min(var_2, 127))))), (min(((min(var_2, (arr_0 [i_0])))), (~var_0))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_15 = (min(((((((2147483647 ? 274877898752 : -4302857539002171089))) && -475534051))), (~var_1)));
        arr_6 [i_1] = (min(((min(0, var_0))), ((((max(var_8, var_9))) ? (((max((arr_2 [1]), var_6)))) : ((var_0 ? var_4 : var_10))))));
        arr_7 [i_1] = var_1;
    }
    var_16 = (max(var_16, (((-(min(((min(235, var_7))), 4302857539002171088)))))));
    #pragma endscop
}
