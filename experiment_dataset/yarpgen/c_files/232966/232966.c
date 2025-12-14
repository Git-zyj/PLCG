/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = (min(1, 374179518541208310));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (~(arr_4 [i_2 + 2] [i_2 - 3] [i_2 - 1] [i_1]));
                    var_20 = (min(((((arr_2 [i_1] [i_1] [i_2 + 2]) ? 70368710623232 : 3913458125))), ((40775 ? 576460752303423487 : 60431))));
                }
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
