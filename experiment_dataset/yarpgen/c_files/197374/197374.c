/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~(~255))) & ((((53364 | var_9) | (~var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 &= arr_2 [i_0];
                var_13 = 2002582106;
                var_14 = ((-2078248226 ? (-9223372036854775807 - 1) : -223324499));
                var_15 += (((max(var_5, (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : var_0)))) < var_4));
            }
        }
    }
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_11 [i_2 - 1] [i_3] [i_3] = ((245 ? (min((((((arr_10 [4] [i_3] [i_3]) + 2147483647)) >> (((arr_1 [2]) + 58)))), ((2078248237 ? -2078248226 : var_8)))) : ((max((min(var_4, 65535)), (arr_8 [i_2 - 1]))))));
                arr_12 [i_2] [i_2] = ((!(!151)));
            }
        }
    }
    #pragma endscop
}
