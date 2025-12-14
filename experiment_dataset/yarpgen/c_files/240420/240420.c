/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = (~var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (((((!(arr_5 [i_2 - 1])))) << ((min(var_3, (arr_5 [i_2 - 1]))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (((max(((142 ? 141 : 1562685331)), (1470058195 > 208))) >= (~22266)));
                    var_19 = var_7;
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((-(min(142, ((24 ? 15 : 22286))))));
                }
            }
        }
    }
    var_20 = (max(0, (((!var_0) | (~102)))));
    var_21 = (var_14 ? 157 : var_4);
    #pragma endscop
}
