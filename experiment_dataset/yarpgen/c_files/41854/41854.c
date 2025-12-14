/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [12] = var_3;
                var_15 |= ((18417758238532010651 ? ((65528 ? (max(28590, var_10)) : -92)) : (((arr_3 [8] [3]) ? ((min(36966, var_2))) : 3))));
                arr_6 [i_0] = (arr_3 [i_0] [i_1]);
                var_16 = (min(var_16, ((((((var_3 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_0])))) * ((((max(28605, -1060184620))) ? 28590 : var_3)))))));
            }
        }
    }
    var_17 += var_13;
    #pragma endscop
}
