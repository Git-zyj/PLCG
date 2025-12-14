/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -32153;
    var_21 = var_0;
    var_22 = (min((min(0, -127)), var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max((((4150268866 ? 144698429 : 4150268869))), (min(9223372036854775795, (arr_1 [i_1])))));
                arr_7 [i_0] [i_1] = var_13;
                arr_8 [i_0] = (min(var_4, (max(4150268866, 91))));
                var_23 = (min(var_23, 4150268869));
            }
        }
    }
    #pragma endscop
}
