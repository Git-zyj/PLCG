/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = (min(-108, (((-118 || (((2023909120 ? 6640 : -123))))))));
    var_18 = (max(var_18, (((2570586639 ? -5573864980578118918 : 216)))));
    var_19 = ((((((min(var_8, 46))) ? -var_3 : 1048376744048893570)) / (var_11 || var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 ^= ((((((((1 ? (arr_5 [i_0] [i_1]) : (arr_4 [i_0]))))) + 2147483647)) << ((((1 ? 1 : -3986141534379947258)) - 1))));
                var_21 += (max(((min((arr_5 [i_0] [i_1]), (arr_5 [i_1] [i_0])))), (((arr_5 [i_0] [i_1]) + var_7))));
                arr_7 [i_0] [i_0] [i_0] = ((var_3 || (((1 ? var_4 : (0 || 140))))));
            }
        }
    }
    #pragma endscop
}
