/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [16] |= (arr_1 [8] [i_2]);
                    arr_9 [i_0] [i_0] [12] [i_1] &= (((((arr_6 [i_0] [i_1]) ? ((min((arr_3 [i_0] [14]), -3169624574814758651))) : 11709935163753686055)) / (((-9223372036854775807 ? (-9223372036854775807 - 1) : 34221)))));
                    var_20 = (((min((max(252, 18284)), (-2518352477681976236 < 75)))) && ((((arr_1 [i_0] [i_0 - 3]) * (~var_14)))));
                }
            }
        }
    }
    var_21 += ((((max(var_2, ((65527 ? 56396 : 1))))) ? 11709935163753686051 : 0));
    var_22 *= (var_8 != -var_11);
    #pragma endscop
}
