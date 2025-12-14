/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (!((max(36, (max(2383343081, (arr_2 [i_0] [i_1] [i_1])))))));
                var_20 = ((~((((arr_2 [i_1] [i_0 + 1] [i_0 - 3]) != (arr_2 [i_0] [i_0 + 1] [i_0 - 1]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_21 = (arr_5 [i_2]);
        var_22 = (((((((arr_4 [i_2] [0]) + 2147483647)) << (((((arr_4 [17] [i_2]) + 265248292)) - 13)))) >= (((((arr_4 [i_2] [i_2]) + 2147483647)) >> (65518 - 65497)))));
    }
    var_23 += (min((((((var_16 ? 65518 : -1)) >> (7519514588190979667 <= var_1)))), (~var_3)));
    var_24 *= var_11;
    #pragma endscop
}
