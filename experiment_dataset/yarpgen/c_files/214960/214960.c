/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max((var_14 - var_13), 262142)), -1231489551));
    var_18 = (1 < 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_19 -= 2841792055;
                var_20 = (min(4294705154, 3990620536054395292));
                var_21 -= (max((~5325620027766271566), (((~(arr_1 [i_1 - 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            {
                var_22 = (min(var_22, (((var_3 >= ((max(-124, 1))))))));
                var_23 = ((1 ^ (max(((max((arr_4 [i_2] [i_2] [i_2]), (arr_10 [i_2] [i_3] [i_2])))), (var_10 & 14011)))));
            }
        }
    }
    var_24 = ((var_11 ? -var_14 : var_1));
    #pragma endscop
}
