/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = ((((max(var_14, var_9))) ? (~var_5) : ((-((1 ? var_7 : 1866668087))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = (((arr_4 [i_2 + 1]) ? ((max(0, 25002))) : ((max(((~(arr_2 [i_0]))), ((min(16422, 1))))))));
                    arr_8 [i_2] [i_2 + 1] = (arr_2 [i_1]);
                    var_17 = (max(var_17, ((((arr_2 [i_2]) && (arr_3 [i_1] [i_1]))))));
                    arr_9 [i_0] [i_0] [2] [i_0] = (~-29643);
                }
            }
        }
    }
    #pragma endscop
}
