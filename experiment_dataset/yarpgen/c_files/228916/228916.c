/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (((arr_0 [2]) - ((~((15 ? var_13 : 17065433493683056939))))));
                var_18 = (min(((((((2 ? 18 : 18))) != var_1))), ((-2 ? (arr_0 [i_0]) : 19))));
                var_19 = ((~((-((-21423 ? -16 : (arr_2 [i_0] [4])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                arr_12 [i_3] [1] = (max((max(-6, ((-1 ? 5 : var_10)))), (arr_10 [19] [i_3 - 1] [i_3 + 1])));
                var_20 += (max((~var_6), (~var_0)));
            }
        }
    }
    var_21 = (max((var_15 <= var_6), ((!(((var_7 ? var_2 : var_14)))))));
    #pragma endscop
}
