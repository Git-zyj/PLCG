/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (max(((78 ? -7975634517531893796 : (((7943233101567786218 ? (arr_4 [i_1] [i_1] [1]) : 3711994249))))), var_3));
                arr_6 [7] [i_1] = ((!(arr_4 [i_1] [i_0] [i_0])));
                arr_7 [i_0] [i_1] = (min((arr_0 [i_0] [i_0]), (((!(arr_0 [i_0] [i_1]))))));
                arr_8 [i_1] [i_0] [i_0] = ((((min((arr_2 [i_0]), 582973046))) ? ((2566709644 ? 65179 : -21)) : -22406));
            }
        }
    }
    #pragma endscop
}
