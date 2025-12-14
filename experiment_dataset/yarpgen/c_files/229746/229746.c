/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = ((~((((16174396302950533333 | 9006099743113216) != var_2)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [11] = 255;
        var_12 += (min(var_6, ((248 ? 4485637616709224076 : 17912392106622976318))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [16] [16] = -623326329;
        arr_6 [15] = (arr_4 [i_1] [i_1]);
    }
    var_13 = ((var_6 & ((max(47298, (0 % var_4))))));
    var_14 = ((var_0 ? 145 : 18410715276690587648));
    #pragma endscop
}
