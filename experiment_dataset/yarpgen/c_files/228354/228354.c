/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (min(((((((-32767 - 1) ? (arr_3 [i_0]) : (-32767 - 1)))) ? (~32767) : ((max(var_8, var_10))))), (arr_2 [i_0])));
                var_21 &= (((((~(~var_11)))) ? var_13 : (((arr_3 [i_0]) ? 4294967295 : 2531038775))));
                var_22 -= (min((((arr_3 [i_0]) ? var_8 : (arr_3 [i_0]))), (arr_3 [i_0])));
                var_23 = 32767;
                var_24 = (min(var_24, (((((max(((min(-32763, var_4))), (min(var_16, (arr_5 [i_0] [i_0] [i_0])))))) ? ((-113 ? ((~(arr_5 [i_0] [i_1] [i_1]))) : ((max((arr_1 [i_0]), (arr_3 [6])))))) : (((~(arr_6 [i_0])))))))));
            }
        }
    }
    var_25 = var_14;
    var_26 = var_17;
    var_27 = (min(var_27, (((((var_18 ? var_17 : -113)))))));
    #pragma endscop
}
