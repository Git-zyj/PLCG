/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~var_4) ? (~var_1) : 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((((((((4510226631996376086 ? (arr_3 [i_0]) : 65535))) ? ((0 * (arr_5 [i_0] [i_1] [i_1]))) : ((~(arr_3 [i_0])))))) <= 4510226631996376076));
                var_21 = ((arr_0 [i_0]) | (arr_5 [i_0] [i_1] [i_0]));
                arr_6 [i_0] = ((~(arr_1 [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] = ((-24320 ? (arr_11 [i_2 + 1] [i_2 - 2]) : (max((~-867856244), (((-9223372036854775802 != (arr_11 [i_2] [i_3]))))))));
                arr_13 [i_2] [i_3] = (arr_7 [i_2 - 1]);
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
