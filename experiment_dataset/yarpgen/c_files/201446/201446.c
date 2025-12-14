/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(54981, 255))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (((arr_3 [i_0]) - ((var_11 ? 3245941685813554161 : (((-28906 / (arr_0 [i_0] [i_0]))))))));
                var_14 = ((-(max(-2236306887495839159, (~639170965)))));
            }
        }
    }
    var_15 = (max(var_15, ((max((((!(!32)))), (min((~-28912), var_11)))))));
    var_16 = ((((min(var_3, (~-1843)))) ? (((max(var_9, -136566850)))) : (max((var_4 < 88), 65531))));
    var_17 = (!9223372036854775807);
    #pragma endscop
}
