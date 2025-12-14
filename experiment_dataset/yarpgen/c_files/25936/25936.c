/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = ((((((arr_0 [i_1]) ? (((arr_2 [i_1]) ? var_6 : (arr_0 [i_0]))) : (((((arr_1 [i_0]) > var_1))))))) ? 34956 : (((arr_0 [i_0 - 4]) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 4])))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [i_2] |= (max((((30564 || (((34952 ? 30564 : 25)))))), ((0 ? -10290 : -26232))));
                    arr_8 [i_1] [i_0] [i_2] [i_0] &= ((~((65535 << (1046346990 - 1046346987)))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((((~(arr_4 [i_0 - 2]))) | (~10289)));
                }
                arr_10 [i_1] = 3927661557873184599;
            }
        }
    }
    var_11 |= (((!var_5) ? ((34971 ? (~var_6) : var_9)) : (((4860527639847741789 ? 1587180687 : 20282)))));
    var_12 = var_9;
    #pragma endscop
}
