/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((3469874815 ? 15 : 825092456)) * (825092478 / 3421)))) + (max(((min(var_0, 37426))), (~var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((((3469874815 ? (arr_5 [i_0 - 2] [7] [i_2]) : (arr_2 [i_2] [i_0 + 2]))) - (~65535)));
                    var_20 = (((max(((((arr_0 [i_0] [i_1]) && (arr_1 [i_0 - 4] [i_1])))), (max(var_11, var_6)))) >> ((((arr_5 [i_0 + 2] [i_1] [i_2]) < (arr_0 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_21 = (((((((28121 ? 99 : 65535)) + var_15))) - (~var_13)));
    #pragma endscop
}
