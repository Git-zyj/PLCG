/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(((((var_1 ? -90 : var_9))) ? (var_7 | var_4) : ((min(-22, -1)))))));
    var_13 = (min(-97, 33));
    var_14 = (((((var_8 | ((var_3 ? 0 : var_5))))) ? (min((var_0 | var_7), -104)) : ((var_7 ? ((min(107, var_11))) : ((97 >> (var_1 + 66)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (min(((max(31, (!1)))), (((((0 ? 96 : (arr_4 [i_0] [i_1] [i_2])))) ? ((1 ? 228 : -76)) : ((max(1, (arr_4 [i_0] [i_0] [i_1]))))))));
                    arr_10 [i_1] = (!var_8);
                }
            }
        }
    }
    #pragma endscop
}
