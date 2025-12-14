/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_12 << (var_3 - 2907783694))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_16 |= (max(((((max(-32, 1774893855))) ? ((min(var_1, (arr_1 [i_0])))) : (arr_0 [i_0] [i_0]))), (~-7)));
        var_17 = (min(var_17, (min(((571957152676052992 ? (((var_3 ? -4 : 245))) : (~var_4))), ((min((~192), 255)))))));
    }
    #pragma endscop
}
