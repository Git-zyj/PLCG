/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((24 ? var_19 : var_7));
    var_21 = ((-((217 ? (~65528) : var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_22 = (6669 >= 8);
                arr_4 [i_1] [i_0] [i_0] = (((26 || (((var_6 ? 49558 : 37076))))) ? (max(((max(11078, 229))), 0)) : ((((250 / -40) ? (var_2 | 31) : ((min(var_11, var_11)))))));
            }
        }
    }
    #pragma endscop
}
