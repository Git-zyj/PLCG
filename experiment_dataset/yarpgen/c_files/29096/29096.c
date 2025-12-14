/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (((((((max(2126539162, 2126539162))) ? (min(2126539162, var_13)) : var_4))) ? var_0 : var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_19 -= (((((((((arr_4 [8]) ? (arr_1 [2]) : 5821764400441431304))) ? ((1 ? 127 : 32752)) : (((arr_1 [2]) >> (-5821764400441431291 + 5821764400441431310)))))) ? -1 : 1132214144193500060));
                arr_6 [i_0] [i_1 + 1] = ((-(((arr_3 [i_0] [i_1 - 1] [i_0]) << (((arr_3 [i_0] [i_1 - 2] [7]) - 6325))))));
                arr_7 [i_1 - 1] [i_0] [i_0] = ((((((arr_3 [i_1 - 1] [i_1] [i_1]) ? ((0 ? -65 : 5821764400441431291)) : (arr_3 [i_0] [i_1 - 2] [i_1 - 2])))) ? (((min(243, (43793 && 9))))) : ((-(max(9141035447795307313, 268435455))))));
                var_20 ^= ((((min((arr_1 [8]), (arr_2 [6])))) ? 5626 : 5821764400441431291));
            }
        }
    }
    #pragma endscop
}
