/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (!32767);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((!((min((arr_4 [i_1] [i_0]), (arr_6 [i_1]))))));
                var_14 = (((((((arr_3 [i_0] [i_0] [i_0]) != (arr_3 [i_0] [i_0] [i_0]))))) - (arr_0 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
