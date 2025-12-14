/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(2514609930, (((((var_3 ? 16 : var_10))) ? 1169732139 : (((min(1, 16))))))));
                arr_7 [i_0] [i_1] = (min((min(var_6, (arr_2 [i_0] [i_0]))), var_1));
            }
        }
    }
    var_16 = ((21834 - ((min((var_12 < var_3), var_8)))));
    var_17 = (~5184941291204617931);
    var_18 = ((var_8 ? (min((-19 < -35), 1001581159)) : 26));
    #pragma endscop
}
