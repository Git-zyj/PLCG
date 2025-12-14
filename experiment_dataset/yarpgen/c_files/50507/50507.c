/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [17] [i_0 - 1] = 189;
                arr_6 [i_0] [16] [15] = ((0 ? ((min(44680, -2414460960972035168))) : 17545271307309728077));
                arr_7 [i_0] = (((-2147483647 - 1) ? 4294967295 : (-114 <= -973461600)));
                arr_8 [i_0] [i_0] = (((8 ? 767169124 : -772125752)));
            }
        }
    }
    var_18 &= ((211 ? ((min(-4436, var_15))) : (0 << 1)));
    var_19 = var_12;
    var_20 = 2310409911896418478;
    #pragma endscop
}
